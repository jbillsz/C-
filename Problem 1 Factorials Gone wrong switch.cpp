#include <iostream>
using namespace std;

int main()
{
	short number;
	cout <<"Enter a number: ";
	cin >> number;
	cout << "The factorial of " << number << " is ";

	int accumulator = 1;

	switch(number){
		case 0:
		case 1:
		cout<< accumulator << "\n";
		break;
		
		case 2:
		accumulator = 2;
			cout<< accumulator << "\n";
		break;
		
		case 3:
		accumulator = 6;
			cout<< accumulator << "\n";
		break;
		
		default:
		cout << "None\n";
	}
	return 0;
}

// Implemented 0-3
