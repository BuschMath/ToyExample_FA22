#ifndef BOTTLE_H
#define BOTTLE_H

#include <string>

using namespace std;

class Bottle
{
public:
	Bottle();
	~Bottle();

	string getMaterial() { return material; };

	bool addContents(string contents_, float addVolume);

private:
	string material;
	int numOpenings;
	float maxVolume;
	float currentVolume;
	string contents;
};



#endif // !BOTTLE_H
