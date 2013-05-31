#pragma once

const int NumPoses = 4;		// N, S, E, W
const int NumBrickTypes = 7;	// 2x2, 1x4, "T", 
								// left and right "L"
								// left and right offset,
struct BrickPose {
	int w, h;
	char *grid[4];
};


// The following is an array of the different bricks that
// are available.  Here is how to access them:
//	bricks[5][0].w // the width of the 5th brick, default orientation
//	bricks[2][3].h // the height of the 2nd brick type, 3rd rotation
//	bricks[1][0].grid[0][0]  // element [0][0] from a particular brick
				 // ' ' or 'X'
const BrickPose bricks[NumBrickTypes][NumPoses] =
{
	{
		{2, 2,	"XX  ",
				"XX  ",
				"    ",
				"    "},
		{2, 2,	"XX  ",
				"XX  ",
				"    ",
				"    "},
		{2, 2,	"XX  ",
				"XX  ",
				"    ",
				"    "},
		{2, 2,	"XX  ",
				"XX  ",
				"    ",
				"    "}
},
	{
		{1, 4,	"X   ",
				"X   ",
				"X   ",
				"X   "},
		{4, 1,  "XXXX",
				"    ",
				"    ",
				"    "},
		{1, 4,  "X   ",
				"X   ",
				"X   ",
				"X   "},
		{4, 1,  "XXXX",
				"    ",
				"    ",
				"    "}
	},
	{
		{2, 3,	"X   ",
				"XX  ",
				"X   ",
				"    "},
		{3, 2,  " X  ",
				"XXX ",
				"    ",
				"    "},
		{2, 3,  " X  ",
				"XX  ",
				" X  ",
				"    "},
		{3, 2,  "XXX ",
				" X  ",
				"    ",
				"    "}
	},
	{
		{2, 3,	"XX  ",
				"X   ",
				"X   ",
				"    "},
		{3, 2,  "X   ",
				"XXX ",
				"    ",
				"    "},
		{2, 3,  " X  ",
				" X  ",
				"XX  ",
				"    "},
		{3, 2,  "XXX ",
				"  X ",
				"    ",
				"    "}
	},
	{
		{2, 3,	"XX  ",
				" X  ",
				" X  ",
				"    "},
		{3, 2,  "XXX ",
				"X   ",
				"    ",
				"    "},
		{2, 3,  "X   ",
				"X   ",
				"XX  ",
				"    "},
		{3, 2,  "  X ",
				"XXX ",
				"    ",
				"    "}
	},
	{
		{2, 3,	"X   ",
				"XX  ",
				" X  ",
				"    "},
		{3, 2,  " XX ",
				"XX  ",
				"	 ",
				"    "},
		{2, 3,  "X   ",
				"XX  ",
				" X  ",
				"    "},
		{3, 2,  " XX ",
				"XX  ",
				"    ",
				"    "}
	},
	{
		{2, 3,	" X  ",
				"XX  ",
				"X   ",
				"    "},
		{3, 2,  "XX ",
				" XX ",
				"    ",
				"    "},
		{2, 3,  " X  ",
				"XX  ",
				"X   ",
				"    "},
		{3, 2,  "XX  ",
				" XX ",
				"    ",
				"    "}
	}
};

