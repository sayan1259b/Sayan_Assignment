#include "threshold.h"

threshold::threshold():
	n(0)
{
	//constructor
}

int threshold::getN()
{
	return n;
}

void threshold::setN(int threshold)
{
	this->n = threshold;
}
