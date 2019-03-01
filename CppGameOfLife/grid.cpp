#include "gol.h"

Grid::Grid(int x, int y)
	length = x;
	height = y;
	grid [x][y];
}

void Grid::setPos(int x, int y, int z)
{
	grid[x][y] = z;
}

int Grid::getPos(int x, int y)
{
	return grid[x][y];
}

int Grid::getLength(void)
{
	return length;
}

int Grid::getHeight(void)
{
	return height;
}



