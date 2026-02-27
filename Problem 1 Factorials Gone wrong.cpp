# include <iostream>
using namespace std;

int main()
{
	short number;
	cout <<"Enter a number: ";
	cin >> number;
	cout << "The factorial of " << number << " is ";

	int accumulator = 1;
	if(number< 0 ){
		cout << "None";
	
	}
	else{
		for(; number > 0; accumulator *= number --);

	cout <<accumulator << ".\n";
	}
	return 0;
}

