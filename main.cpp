#include <iostream>
using namespace std;

int main()
{
	int a_in;
	long long product = 1;
	cout << "Enter your number (1-20): ";
	cin >> a_in;
	do {

	} while(a_in < 0 || a_in > 20);
	if (a_in < 20) {
		while (a_in <= 20) {
			product *= a_in++;
		}
	}
	else product = 20 * 20;
	cout << "Product of numbers: "<< product << endl;
	system("pause");
	return 0;
}