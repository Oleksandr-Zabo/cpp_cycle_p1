#include <iostream>
using namespace std;
#include <windows.h> 


int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	int num_start, num_end, end_num, start_num;
	cout << "Enter the beginning of the range: " << endl;
	cin >> num_start;
	cout << "Enter the end of the range: " << endl;
	cin >> num_end;
	end_num = num_end;
	start_num = num_start;


	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "\nRange numbers: \n";

	if (num_start > num_end) {
		
		while (num_start >= end_num) {
			cout << end_num++ << endl;
		}

		SetConsoleTextAttribute(hConsole, 0x0C);
		cout << "\nEven numbers: \n";
		end_num = num_end;
		while (num_start >= end_num) {
			if (end_num % 2 == 0) {
				cout << end_num++ << endl;
			}
			else end_num++;
			
		}

		SetConsoleTextAttribute(hConsole, 0x03);
		cout << "\nOdd numbers: \n";
		end_num = num_end;
		while (num_start >= end_num) {
			if (end_num % 2 != 0) {
				cout << end_num++ << endl;
			}
			else end_num++;

		}

		SetConsoleTextAttribute(hConsole, 0x0A);
		cout << "\nMultiples of seven: \n";
		end_num = num_end;
		while (num_start >= end_num) {
			if (end_num % 7 == 0) {
				cout << end_num++ << endl;
			}
			else end_num++;

		}
	}

	else {
		while (start_num <= num_end) {
			cout << start_num++ << endl;
		}

		SetConsoleTextAttribute(hConsole, 0x0C);
		cout << "\nEven numbers: \n";
		start_num = num_start;
		while (start_num <= num_end) {
			if (start_num % 2 == 0) {
				cout << start_num++ << endl;
			}
			else start_num++;

		}

		SetConsoleTextAttribute(hConsole, 0x03);
		cout << "\nOdd numbers: \n";
		start_num = num_start;
		while (start_num <= num_end) {
			if (start_num % 2 != 0) {
				cout << start_num++ << endl;
			}
			else start_num++;

		}

		SetConsoleTextAttribute(hConsole, 0x0A);
		cout << "\nMultiples of seven: \n";
		start_num = num_start;
		while (start_num <= num_end) {
			if (start_num % 7 == 0) {
				cout << start_num++ << endl;
			}
			else start_num++;

		}
	}

	
	SetConsoleTextAttribute(hConsole, 0x0F);
	system("pause");
	return 0;
}