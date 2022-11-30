#include <iostream>
#include "Bottle.h"

using namespace std;

int main()
{
	Bottle b;

	cout << b.getMaterial();

	cout << "\nAdding milk was ";
	if (b.addContents("milk", 33))
		cout << "Successful!";
	else
		cout << "Failed!";

	return 0;
}