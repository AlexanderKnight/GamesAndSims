
#include "gol.h"

Neuron::Neuron(double a)
{
	act = a;
}

double Neuron::getActivation(void)
{
	return act;
}

void Neuron::setActivation(double a)
{
	act = a;
}

