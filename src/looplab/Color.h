//------------------------------------------------------------------------------------------------//
// looplab/Color.h
//------------------------------------------------------------------------------------------------//

#ifndef LOOPLAB_COLOR_H
#define LOOPLAB_COLOR_H

#include "looplab/Pixel.h"

//------------------------------------------------------------------------------------------------//

namespace looplab {

//------------------------------------------------------------------------------------------------//

static inline RGB8 cAliceBlue()				{ return RGB8{240, 248, 255}; }
static inline RGB8 cAntiqueWhite()			{ return RGB8{250, 235, 215}; }
static inline RGB8 cAqua()					{ return RGB8{  0, 255, 255}; }
static inline RGB8 cAquamarine()			{ return RGB8{127, 255, 212}; }
static inline RGB8 cAzure()					{ return RGB8{240, 255, 255}; }
static inline RGB8 cBeige()					{ return RGB8{245, 245, 220}; }
static inline RGB8 cBisque()				{ return RGB8{255, 228, 196}; }
static inline RGB8 cBlack()					{ return RGB8{  0,   0,   0}; }
static inline RGB8 cBlanchedAlmond()		{ return RGB8{255, 235, 205}; }
static inline RGB8 cBlue()					{ return RGB8{  0,   0, 255}; }
static inline RGB8 cBlueViolet()			{ return RGB8{138,  43, 226}; }
static inline RGB8 cBrown()					{ return RGB8{165,  42,  42}; }
static inline RGB8 cBurlyWood()				{ return RGB8{222, 184, 135}; }
static inline RGB8 cCadetBlue()				{ return RGB8{95 , 158, 160}; }
static inline RGB8 cChartreuse()			{ return RGB8{127, 255,   0}; }
static inline RGB8 cChocolate()				{ return RGB8{210, 105,  30}; }
static inline RGB8 cCoral()					{ return RGB8{255, 127,  80}; }
static inline RGB8 cCornflowerBlue()		{ return RGB8{100, 149, 237}; }
static inline RGB8 cCornsilk()				{ return RGB8{255, 248, 220}; }
static inline RGB8 cCrimson()				{ return RGB8{220,  20,  60}; }
static inline RGB8 cCyan()					{ return RGB8{  0, 255, 255}; }
static inline RGB8 cDarkBlue()				{ return RGB8{  0,   0, 139}; }
static inline RGB8 cDarkCyan()				{ return RGB8{  0, 139, 139}; }
static inline RGB8 cDarkGoldenRod()			{ return RGB8{184, 134,  11}; }
static inline RGB8 cDarkGray()				{ return RGB8{169, 169, 169}; }
static inline RGB8 cDarkGreen()				{ return RGB8{  0, 100,   0}; }
static inline RGB8 cDarkKhaki()				{ return RGB8{189, 183, 107}; }
static inline RGB8 cDarkMagenta()			{ return RGB8{139,   0, 139}; }
static inline RGB8 cDarkOliveGreen()		{ return RGB8{ 85, 107,  47}; }
static inline RGB8 cDarkorange()			{ return RGB8{255, 140,   0}; }
static inline RGB8 cDarkOrchid()			{ return RGB8{153,  50, 204}; }
static inline RGB8 cDarkRed()				{ return RGB8{139,   0,   0}; }
static inline RGB8 cDarkSalmon()			{ return RGB8{233, 150, 122}; }
static inline RGB8 cDarkSeaGreen()			{ return RGB8{143, 188, 143}; }
static inline RGB8 cDarkSlateBlue()			{ return RGB8{72,   61, 139}; }
static inline RGB8 cDarkSlateGray()			{ return RGB8{47,   79,  79}; }
static inline RGB8 cDarkTurquoise()			{ return RGB8{  0, 206, 209}; }
static inline RGB8 cDarkViolet()			{ return RGB8{148,   0, 211}; }
static inline RGB8 cDeepPink()				{ return RGB8{255,  20, 147}; }
static inline RGB8 cDeepSkyBlue()			{ return RGB8{  0, 191, 255}; }
static inline RGB8 cDimGray()				{ return RGB8{105, 105, 105}; }
static inline RGB8 cDimGrey()				{ return RGB8{105, 105, 105}; }
static inline RGB8 cDodgerBlue()			{ return RGB8{ 30, 144, 255}; }
static inline RGB8 cFireBrick()				{ return RGB8{178,  34,  34}; }
static inline RGB8 cFloralWhite()			{ return RGB8{255, 250, 240}; }
static inline RGB8 cForestGreen()			{ return RGB8{ 34, 139,  34}; }
static inline RGB8 cFuchsia()				{ return RGB8{255,   0, 255}; }
static inline RGB8 cGainsboro()				{ return RGB8{220, 220, 220}; }
static inline RGB8 cGhostWhite()			{ return RGB8{248, 248, 255}; }
static inline RGB8 cGold()					{ return RGB8{255, 215,   0}; }
static inline RGB8 cGoldenRod()				{ return RGB8{218, 165,  32}; }
static inline RGB8 cGray()					{ return RGB8{128, 128, 128}; }
static inline RGB8 cGreen()					{ return RGB8{  0, 128,   0}; }
static inline RGB8 cGreenYellow()			{ return RGB8{173, 255,  47}; }
static inline RGB8 cHoneyDew()				{ return RGB8{240, 255, 240}; }
static inline RGB8 cHotPink()				{ return RGB8{255, 105, 180}; }
static inline RGB8 cIndianRed ()			{ return RGB8{205,  92,  92}; }
static inline RGB8 cIndigo ()				{ return RGB8{ 75,   0, 130}; }
static inline RGB8 cIvory()					{ return RGB8{255, 255, 240}; }
static inline RGB8 cKhaki()					{ return RGB8{240, 230, 140}; }
static inline RGB8 cLavender()				{ return RGB8{230, 230, 250}; }
static inline RGB8 cLavenderBlush()			{ return RGB8{255, 240, 245}; }
static inline RGB8 cLawnGreen()				{ return RGB8{124, 252,   0}; }
static inline RGB8 cLemonChiffon()			{ return RGB8{255, 250, 205}; }
static inline RGB8 cLightBlue()				{ return RGB8{173, 216, 230}; }
static inline RGB8 cLightCoral()			{ return RGB8{240, 128, 128}; }
static inline RGB8 cLightCyan()				{ return RGB8{224, 255, 255}; }
static inline RGB8 cLightGoldenRodYellow()	{ return RGB8{250, 250, 210}; }
static inline RGB8 cLightGray()				{ return RGB8{211, 211, 211}; }
static inline RGB8 cLightGreen()			{ return RGB8{144, 238, 144}; }
static inline RGB8 cLightPink()				{ return RGB8{255, 182, 193}; }
static inline RGB8 cLightSalmon()			{ return RGB8{255, 160, 122}; }
static inline RGB8 cLightSeaGreen()			{ return RGB8{ 32, 178, 170}; }
static inline RGB8 cLightSkyBlue()			{ return RGB8{135, 206, 250}; }
static inline RGB8 cLightSlateGray()		{ return RGB8{119, 136, 153}; }
static inline RGB8 cLightSteelBlue()		{ return RGB8{176, 196, 222}; }
static inline RGB8 cLightYellow()			{ return RGB8{255, 255, 224}; }
static inline RGB8 cLime()					{ return RGB8{  0, 255,   0}; }
static inline RGB8 cLimeGreen()				{ return RGB8{ 50, 205,  50}; }
static inline RGB8 cLinen()					{ return RGB8{250, 240, 230}; }
static inline RGB8 cMagenta()				{ return RGB8{255,   0, 255}; }
static inline RGB8 cMaroon()				{ return RGB8{128,   0,   0}; }
static inline RGB8 cMediumAquaMarine()		{ return RGB8{102, 205, 170}; }
static inline RGB8 cMediumBlue()			{ return RGB8{  0,   0, 205}; }
static inline RGB8 cMediumOrchid()			{ return RGB8{186,  85, 211}; }
static inline RGB8 cMediumPurple()			{ return RGB8{147, 112, 219}; }
static inline RGB8 cMediumSeaGreen()		{ return RGB8{ 60, 179, 113}; }
static inline RGB8 cMediumSlateBlue()		{ return RGB8{123, 104, 238}; }
static inline RGB8 cMediumSpringGreen()		{ return RGB8{  0, 250, 154}; }
static inline RGB8 cMediumTurquoise()		{ return RGB8{ 72, 209, 204}; }
static inline RGB8 cMediumVioletRed()		{ return RGB8{199,  21, 133}; }
static inline RGB8 cMidnightBlue()			{ return RGB8{ 25,  25, 112}; }
static inline RGB8 cMintCream()				{ return RGB8{245, 255, 250}; }
static inline RGB8 cMistyRose()				{ return RGB8{255, 228, 225}; }
static inline RGB8 cMoccasin()				{ return RGB8{255, 228, 181}; }
static inline RGB8 cNavajoWhite()			{ return RGB8{255, 222, 173}; }
static inline RGB8 cNavy()					{ return RGB8{  0,   0, 128}; }
static inline RGB8 cOldLace()				{ return RGB8{253, 245, 230}; }
static inline RGB8 cOlive()					{ return RGB8{128, 128,   0}; }
static inline RGB8 cOliveDrab()				{ return RGB8{107, 142,  35}; }
static inline RGB8 cOrange()				{ return RGB8{255, 165,   0}; }
static inline RGB8 cOrangeRed()				{ return RGB8{255,  69,   0}; }
static inline RGB8 cOrchid()				{ return RGB8{218, 112, 214}; }
static inline RGB8 cPaleGoldenRod()			{ return RGB8{238, 232, 170}; }
static inline RGB8 cPaleGreen()				{ return RGB8{152, 251, 152}; }
static inline RGB8 cPaleTurquoise()			{ return RGB8{175, 238, 238}; }
static inline RGB8 cPaleVioletRed()			{ return RGB8{219, 112, 147}; }
static inline RGB8 cPapayaWhip()			{ return RGB8{255, 239, 213}; }
static inline RGB8 cPeachPuff()				{ return RGB8{255, 218, 185}; }
static inline RGB8 cPeru()					{ return RGB8{205, 133,  63}; }
static inline RGB8 cPink()					{ return RGB8{255, 192, 203}; }
static inline RGB8 cPlum()					{ return RGB8{221, 160, 221}; }
static inline RGB8 cPowderBlue()			{ return RGB8{176, 224, 230}; }
static inline RGB8 cPurple()				{ return RGB8{128,   0, 128}; }
static inline RGB8 cRed()					{ return RGB8{255,   0,   0}; }
static inline RGB8 cRosyBrown()				{ return RGB8{188, 143, 143}; }
static inline RGB8 cRoyalBlue()				{ return RGB8{ 65, 105, 225}; }
static inline RGB8 cSaddleBrown()			{ return RGB8{139,  69,  19}; }
static inline RGB8 cSalmon()				{ return RGB8{250, 128, 114}; }
static inline RGB8 cSandyBrown()			{ return RGB8{244, 164,  96}; }
static inline RGB8 cSeaGreen()				{ return RGB8{ 46, 139,  87}; }
static inline RGB8 cSeaShell()				{ return RGB8{255, 245, 238}; }
static inline RGB8 cSienna()				{ return RGB8{160,  82,  45}; }
static inline RGB8 cSilver()				{ return RGB8{192, 192, 192}; }
static inline RGB8 cSkyBlue()				{ return RGB8{135, 206, 235}; }
static inline RGB8 cSlateBlue()				{ return RGB8{106,  90, 205}; }
static inline RGB8 cSlateGray()				{ return RGB8{112, 128, 144}; }
static inline RGB8 cSnow()					{ return RGB8{255, 250, 250}; }
static inline RGB8 cSpringGreen()			{ return RGB8{  0, 255, 127}; }
static inline RGB8 cSteelBlue()				{ return RGB8{ 70, 130, 180}; }
static inline RGB8 cTan()					{ return RGB8{210, 180, 140}; }
static inline RGB8 cTeal()					{ return RGB8{  0, 128, 128}; }
static inline RGB8 cThistle()				{ return RGB8{216, 191, 216}; }
static inline RGB8 cTomato()				{ return RGB8{255,  99,  71}; }
static inline RGB8 cTurquoise()				{ return RGB8{ 64, 224, 208}; }
static inline RGB8 cViolet()				{ return RGB8{238, 130, 238}; }
static inline RGB8 cWheat()					{ return RGB8{245, 222, 179}; }
static inline RGB8 cWhite()					{ return RGB8{255, 255, 255}; }
static inline RGB8 cWhiteSmoke()			{ return RGB8{245, 245, 245}; }
static inline RGB8 cYellow()				{ return RGB8{255, 255,   0}; }
static inline RGB8 cYellowGreen()			{ return RGB8{154, 205,  50}; }

//------------------------------------------------------------------------------------------------//

} // namespace looplab

//------------------------------------------------------------------------------------------------//

#endif
