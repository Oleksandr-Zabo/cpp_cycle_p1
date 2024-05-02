#include <iostream>
using namespace std;

int main()
{
	int num_in, sum = 0;
	
	do {
		cout << "Enter your number: ";
		cin >> num_in;
		sum += num_in;
	} while (num_in != 0);

	cout << "Sum of numbers: " << sum << endl;
	system("pause");
	return 0;
}