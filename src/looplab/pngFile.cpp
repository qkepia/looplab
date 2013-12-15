//------------------------------------------------------------------------------------------------//
// looplab/pngFile.cpp
//------------------------------------------------------------------------------------------------//

#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <cstdarg>
#include <vector>
#include "png.h"
#include "looplab/pngFile.h"

//------------------------------------------------------------------------------------------------//

namespace looplab {

//------------------------------------------------------------------------------------------------//

void pngRead(const std::string& file, ImageBuffer<RGBA8>& image)
{
	// open file
	FILE* fp = nullptr;
	try
	{
		fp = fopen(file.c_str(), "rb");		
		if(!fp)
			throw;

		// check if it's a png, 8 is the maximum size that can be checked
		png_byte header[8];
		fread(header, 1, 8, fp);
		if(png_sig_cmp(header, 0, 8))
			throw;

		// try to create read struct
		png_structp pStruct = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
		if(!pStruct)
			throw;

		// try to create info struct
		png_infop pInfo = png_create_info_struct(pStruct);
		if(!pInfo)
			throw;

		// read info
		png_init_io(pStruct, fp);
		png_set_sig_bytes(pStruct, 8);
		png_read_info(pStruct, pInfo);

		int width = png_get_image_width(pStruct, pInfo);
		int height = png_get_image_height(pStruct, pInfo);
		png_byte colorType = png_get_color_type(pStruct, pInfo);
		png_byte bitDepth = png_get_bit_depth(pStruct, pInfo);
		png_byte channels = png_get_channels(pStruct, pInfo);

		png_read_update_info(pStruct, pInfo);

		// read data	
		std::vector<std::vector<png_byte>> rowBytes(height);
		std::vector<png_byte*> rowPointers(height);
		png_size_t rowByteCount = png_get_rowbytes(pStruct, pInfo);
		for(int y = 0; y < height; y++)
		{
			rowBytes[y].resize(rowByteCount);
			rowPointers[y] = rowBytes[y].data();
		}
	
		png_read_image(pStruct, rowPointers.data());

		if(colorType == PNG_COLOR_TYPE_RGB)
		{
			image.setSize(width, height);
			for(int y = 0; y < height; y++)
			{
				png_byte* pBytes = rowPointers[y];
				for(int x = 0; x < width; x++, pBytes += 3)
				{
					image(x, y) = {pBytes[0], pBytes[1], pBytes[2], 255};
				}
			}
		}
		else if(colorType == PNG_COLOR_TYPE_RGBA)
		{
			image.setSize(width, height);
			for(int y = 0; y < height; y++)
			{
				png_byte* pBytes = rowPointers[y];
				for(int x = 0; x < width; x++, pBytes += 4)
				{
					image(x, y) = {pBytes[0], pBytes[1], pBytes[2], pBytes[3]};
				}
			}
		}
		else
		{
			throw;
		}
	}
	catch(...)
	{
		// File couldn't be loaded or read.
		assert(0);
		if(fp)
			fclose(fp);
	}
}

//------------------------------------------------------------------------------------------------//

void pngWrite(const std::string& file, const ImageBuffer<RGBA8>& image)
{
	// save file
	FILE* fp = nullptr;
	try
	{
		fp = fopen(file.c_str(), "wb");
		if(!fp)
			throw;

		// try to create write struct
		png_structp pStruct = png_create_write_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);
		if(!pStruct)
			throw;

		// try to create info struct
		png_infop pInfo = png_create_info_struct(pStruct);
		if(!pInfo)
			throw;

		png_init_io(pStruct, fp);
		
		// write RGBA data
		png_set_IHDR(pStruct, pInfo, image.width(), image.height(), 8, PNG_COLOR_TYPE_RGBA, 
		PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_BASE, PNG_FILTER_TYPE_BASE);

		png_write_info(pStruct, pInfo);
	
		std::vector<png_byte*> rowPointers(image.height());
		std::vector<std::vector<png_byte>> bytes(image.height());
		for(int y = 0;  y < image.height(); y++)
		{
			bytes[y].resize(4 * image.width());			
			rowPointers[y] = bytes[y].data();
			for(int x = 0;  x < image.width(); x++)
			{
				RGBA8 c = image(x, y);
				bytes[y][4*x + 0] = c.r;
				bytes[y][4*x + 1] = c.g;
				bytes[y][4*x + 2] = c.b;
				bytes[y][4*x + 3] = c.a;
			}
		}

		// write bytes
		png_write_image(pStruct, rowPointers.data());		

		// end write
		png_write_end(pStruct, nullptr);
	}
	catch(...)
	{
		// File couldn't be saved.
		assert(0);
		if(fp)
			fclose(fp);
	}
}

//------------------------------------------------------------------------------------------------//

} // namespace looplab

//------------------------------------------------------------------------------------------------//