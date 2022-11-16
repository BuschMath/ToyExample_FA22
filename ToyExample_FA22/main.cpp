#include <iostream>

using namespace std;

typedef double SCALAR;

enum colors
{
	Red,
	Blue,
	Green,
	Purple,
	Pink,
	Brown
};

int main()
{
	SCALAR number = 1;
	SCALAR another_number = 2;
	colors fav = Blue;

	cout << "SCALAR add: " << number + another_number << endl << endl;
	cout << "colors fav: " << fav << endl;

	switch (fav)
	{
	case Red:
		break;
	case Blue:	cout << " Blue\n";
		break;
	case Green:
		break;
	case Purple:
		break;
	case Pink:
		break;
	case Brown:
		break;
	default:
		break;
	}

	return 0;
}