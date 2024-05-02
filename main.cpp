#include <iostream>
using namespace std;

int main()
{//From 1 to 1000 inclusive
	int i=1;
	double sum=0;
	while (i <= 1000) {
		sum += i++;
	}
	cout << "Arithmetic mean" 
		<<"of all integers from 1 to 1000: " 
		<<sum/1000
		<< endl;
	system("pause");
	return 0;
}