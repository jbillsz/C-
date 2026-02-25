#include <iostream>
using namespace std;

int main() {
    int arg1 = -1;
    cout << "outer before block: " << arg1 << "\n";

    {
        char arg1 = 'A';
        cout << "inner block: " << arg1 << "\n";
    }

    cout << "outer after block: " << arg1 << "\n";
}
// Guesses before running:
// I stil believe a variable resolution error would happen since arg1 was define in the main scope
// the nested block is simple just part of the main scope but if c++ reads the inner block before the outer one which i doubt because of how c++ reads codes
// then still will have the same problems but outer one.


// Runnin result
// Program printed -1, was partially right on the scope heirachy but need to find out why c++ ignored the other declaration

