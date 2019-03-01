
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
		void setYPos(int y);
		void setLife(int l);
		int getXPos(void);
		int getYPos(void);
		int getLife(void);

	private:
		int xPos;
		int yPos;
		int life;
}

class Neuron
{
	public:
		void setActivation(double x);
		void setInputs(Neuron inputs);
		void setConnections(double connections);
		double getActivation();
		Neuron getInputs();
		double getConnections();
	private:
		double act;
		Neuron inputs;
		double conn;
}
#endif
