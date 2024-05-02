#include <iostream>
using namespace std;

int main()
{
	int lenth, i=0;
	bool vertical_horisontal;
	char char_in;
	cout << "Enter lenth of line: ";
	cin >> lenth;
	cout << "Enter vertical(0) or horisontal line(1): ";
	cin >> vertical_horisontal;
	cout << "Enter char: ";
	cin >> char_in;
	switch (vertical_horisontal)
	{
	case 0: {
		while (i < lenth) {
			cout << char_in;
			i++;
		}
	}

	case 1: {
		while (i < lenth) {
			cout << char_in << endl;
			i++;
		}
	}
	}

	cout<< endl;
	system("pause");
	return 0;
}