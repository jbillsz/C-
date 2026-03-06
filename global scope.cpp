#include <iostream>
using namespace std;

int numCalls = 0;   // numCalls global variable

void foo() {
++numCalls;
}

int main(){
	foo(); foo(); foo(); // function call to see how many times something is called.
	cout << numCalls; << endl; //3
}

