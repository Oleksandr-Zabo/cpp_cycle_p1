#include <iostream>
using namespace std;
#include <windows.h> 

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	
	int k_in, i=1;
	cout << "Enter your number: ";
	cin >> k_in;
	SetConsoleTextAttribute(hConsole, 0x0E);
	while(i <= 10) {
		cout <<k_in<< " x " << i
			<< " = " << k_in*i
			<< endl;
		i++;
	}
	SetConsoleTextAttribute(hConsole, 0x07);
	
	system("pause");
	return 0;
}