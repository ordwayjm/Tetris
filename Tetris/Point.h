#pragma once

class Point {
	public:
		Point(int initX, int initY) 
		{
			x = initX;
			y = initY;
		}

		Point()
		{
			x = y = 0;
		}

		int getX() { return x; }
		int getY() { return y; }

		void setPoint(int newX, int newY) { x = newX; y = newY; }
		void setX(int newX) { x = newX; }
		void setY(int newY) { y = newY; }

	private:
		int x, y;
};