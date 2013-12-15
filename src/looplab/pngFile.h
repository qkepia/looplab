//------------------------------------------------------------------------------------------------//
// looplab/pngFile.h
//------------------------------------------------------------------------------------------------//

#ifndef LOOPLAB_PNG_FILE_H
#define LOOPLAB_PNG_FILE_H

#include <string>
#include "looplab/ImageBuffer.h"
#include "looplab/Pixel.h"

//------------------------------------------------------------------------------------------------//

namespace looplab {

//------------------------------------------------------------------------------------------------//
	
void pngRead(const std::string& file, ImageBuffer<RGBA8>& image);	

void pngWrite(const std::string& file, const ImageBuffer<RGBA8>& image);

//------------------------------------------------------------------------------------------------//

} // namespace looplab

#endif
