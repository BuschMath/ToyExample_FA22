#include "Bottle.h"

Bottle::Bottle()
{
	material = "plastic";
	numOpenings = 1;
	maxVolume = 32;
	currentVolume = 0;
	contents = "water";
}

Bottle::~Bottle()
{
}

bool Bottle::addContents(string contents_, float addVolume)
{
	if (maxVolume >= currentVolume + addVolume)
	{
		contents = contents_;
		currentVolume += addVolume;
		return true;
	}
	else
		return false;
}
