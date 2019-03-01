
#include "gol.h"

Neuron::Neuron(double a, Neuron inputs, double connections)
{
	act = a;
	inputs = inputs;
	conn = connections;
}

Neuron::Neuron(void)
{
	act = 0.;
	inputs = {};
	conn = {};
}


void Neuron::setActivation(double a)
{
	act = a;
}

void setInputs(Neuron inputs)
{
	inputs = inputs;
}

void setConnections(double connections)
{
	conn = connections;
}

double Neuron::getActivation(void)
{
	return act;
}

Neuron Neuron::getInputs(void)
{
	return inputs;
}

double Neuron::getConnections(void)
{
	return conn;
}

