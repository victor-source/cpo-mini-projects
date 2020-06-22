#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num = 1;
	int number;
	int total = 0;
	int input;
	cout << "To use this calculator, enter\n -> a to (a)dd,\n -> s to (s)ubtract,\n -> d to (d)ivide,\n -> m to (m)ultiply e.t.c. \n\n";
	cin >> input;
	if (input == 'a'){
		while (num <= 5) {
			cin >> number;
			if (number == 'done'){
				break;
			}
			total += number;
			
			num++;
		}
	cout << total << endl;
	}
}