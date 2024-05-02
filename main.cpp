#include <iostream>
using namespace std;

int main()
{
	int num_start, num_end, sum=0;
	cout << "Enter the beginning of the range: " << endl;
	cin >> num_start;
	cout << "Enter the end of the range: " << endl;
	cin >> num_end;

	if (num_start > num_end) {

		while (num_start >= num_end) {
			sum += num_end++;
		}
	}
	else {

		while (num_start <= num_end) {
			sum += num_start++;
		}
	}
	cout << "The sum of the range: " << sum << endl;
	system("pause");
	return 0;
}