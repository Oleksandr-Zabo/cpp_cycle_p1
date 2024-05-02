#include <iostream>
using namespace std;

int main()
{
	int x_in, y_in, i = 1;
	double pow=1;
	cout << "Enter first number (x): ";
	cin >> x_in;
	cout << "Enter second number (y): ";
	cin >> y_in;
	if (y_in > 0) {
		while (i<=y_in) {
			pow *= x_in;
			i++;
		}
	}
	else if (y_in < 0) {
		y_in *= -1;
		while (i <= y_in) {
			pow *= x_in;
			i++;
		}
		
		pow = 1 / pow;
		
	}
	else {
		pow = 1;
	}
	cout << "x ^ y = " << pow << endl;
	system("pause");
	return 0;
}