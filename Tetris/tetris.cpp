#include <cstdlib>
#include <cstdio>
using namespace std;

#include "tetris.h"

Tetris::Tetris() 
{


}

void Tetris::Update() 
{

}

void Tetris::CheckPlayer()
{

}

void Tetris::Restart() 
{

}

void Tetris::PlayerMove(int dir) 
{
	if (dir < 0 && pos.getX() > 0)
		pos.setX(pos.getX()-1);
	else if (dir > 0 && pos.getX() < cols - 1)
		pos.setX(pos.getX()+1);
	
	CheckPlayer();
}