#include <iostream>
using namespace std;

int main(){
	int arg1;
	arg1 = -1;
	int x, y,z; 
	char myDouble ='5';
	char arg1 = 'A'; 
	cout<< arg1 <<"\n";
	return 0;
}

//comments 
//conflicting declaration with arg 1. arg1 was declared as int but initialized again with char.
// As i suspected if you declare variables and not initialize program will still work but space will be reserved for nothing.
// I removed char arg1 out and run cout<< x and for the few times i ran, i got random numbers.
