#include <iostream>
#include <cstdint>

#include "looplab/ImageBuffer.h"
#include "looplab/Pixel.h"
#include "looplab/pngFile.h"
using namespace looplab;

//------------------------------------------------------------------------------------------------//

int main(int argc, char** argv)
{
	std::string pathIn("S:\\my\\GitHub\\looplab\\test\\knk-ultimate-weapon\\grab29726.png");
	ImageBuffer<RGBA8> image;
	pngRead(pathIn, image);
	std::string pathOut("S:\\test-out.png");
	pngWrite(pathOut, image);

	return 0;
}