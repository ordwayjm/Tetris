#pragma once

#include "Point.h"

const int rows = 15;
const int cols = 10;

class Tetris {
	Tetris();
	void Update();
	void Restart();
	void Clear();
	void PlayerMove(int dir);
	void CheckPlayer();

	int score;
	Point pos;
	int grid[rows][cols];
	int timer;
};