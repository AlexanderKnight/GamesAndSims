
#include "gol.h"

Prey::Prey(int x, int y, int l)
{
	xPos = x;
	yPos = y;
	life = l;
}

Prey::setXPos(int x)
{
	xPos = x;
}

Prey::setYPos(int y)
{
	yPos = x;
}

Prey::setLife(int l)
{
	life = l;
}

Prey::getXPos(void)
{
	return xPos;
}

Prey::getYPos(void)
{
	return yPos;
}

Prey::getLife(void)
{
	return life;
}
