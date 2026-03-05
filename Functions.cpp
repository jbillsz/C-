#include <iostream>
using namespace std;
// some code which raises an arbitrary integer to an arbitrary power.
// this is the function declaration

int raiseToPower(int base, int exponent){
	int result = 1;
	for (int i = 0; i < exponent; i = i+1){
		result = result * base;
	}
	return result;
}
// setting a prototype here to calculate just the square (declaration)
int square(int);

//void function that has no return value
void printTheBaseandExponent(int bases, int exponents, int results){
	cout << bases<<" exponent " << exponents <<" is : " << results <<endl;
}
// Function overloading same name but argument parameters is what separate them apart
void print(int x){
	cout <<"Base is : " << x <<endl;
}
void print (const char *x){
	cout << "Base is : " << x << endl;
}

int main() {
	// this is function invocation(call)
	int bases; int exponents;
	cin >>bases>> exponents;
	
	// giving chance to see how function overload will happen though i know anything except int will crash the program
	print(bases); 
	
	int threeExpFour = raiseToPower(bases,exponents);
	
	// no need to declare variable for none type as it returns nothing and so it's NONE
	printTheBaseandExponent(bases, exponents, threeExpFour);
	
	// using the protype here(call)
	int squared = square(bases)
	
	return 0;
}

// defined the prototype,  
int square( int bases){
	
	return bases * bases;
}


// clear use of prototypes is header v cpp files(header is included to find implementation, resolve overloading issues and namespace)