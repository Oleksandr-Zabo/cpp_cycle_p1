#include <iostream>
using namespace std;
#include <windows.h> 


int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	int num_start, num_end, i, temp;
	cout << "Enter the beginning of the range: " << endl;
	cin >> num_start;
	cout << "Enter the end of the range: " << endl;
	cin >> num_end;

	if (num_start > num_end) {
		temp = num_start;
		num_start = num_end;
		num_end = temp;
	}
	
	cout << endl;
	i = num_start;
	while (i <= num_end) {
		SetConsoleTextAttribute(hConsole, 0x06);
			cout << i << " -" ;
			if (i % 2 == 0) {
				SetConsoleTextAttribute(hConsole, 0x0C);
				cout << " /2 ";
			}
			else if (i % 2 != 0) {
				SetConsoleTextAttribute(hConsole, 0x03);
				cout << " !/2 ";
			}
			if (i % 7 == 0) {
				SetConsoleTextAttribute(hConsole, 0x0A);
				cout << " /7 ";
			}
			cout << endl;
			i++;
			
		}
	SetConsoleTextAttribute(hConsole, 0x0F);
	system("pause");
	return 0;
}