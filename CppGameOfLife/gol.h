
#ifndef GOL_H
#define GOL_H

#include <stdio.h>

class Grid
{
	public:
		void setPos(int x, int y);
		int getPos(int x, int y);
		int getLength();
		int getHeight();

	private:
		int length;
		int height;
		int grid;
}

class Prey
{
	public:
		void setXPos(int x);
		void setYPos
#endif
