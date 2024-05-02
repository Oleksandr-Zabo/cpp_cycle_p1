#include <iostream>
using namespace std;

int main()
{
	int number_in, num_i = 0;
	cout << "Enter your number: ";
	cin >> number_in;
	if (number_in > 0) {
		while (number_in + 1 != num_i) {
			cout << num_i++ << endl;
		}
	}
	else if ((number_in < num_i)) {
		while (number_in - 1 != num_i) {
			cout << num_i-- << endl;
		}
	}
	else {
		cout << 0 << endl;
	}

	system("pause");
	return 0;
}