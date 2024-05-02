#include <iostream>
using namespace std;

int main()
{//From a to 500 inclusive
	int a_in, sum=0;
	cout << "Enter your number: ";
	cin >> a_in;
	if (a_in <= 500) {
		while (a_in <= 500)
			sum += a_in++;
	}
	else{
		while (a_in >= 500)
			sum += a_in--;
	}
	cout << "Sum of numbers: " << sum << endl;
	system("pause");
	return 0;
}