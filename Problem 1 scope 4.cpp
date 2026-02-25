#include <iostream>
using namespace std;

int main() {
    int arg1 = -1;


    {
        char arg1 = 'A';
        
    }
	cout << arg1 << "\n";
	return 0;
}

// Comments:
// Based on shadowing and scoping with knowledge of identifier  cout will print  -1.
// Compiler agrees after running it.
