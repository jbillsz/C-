#include <iostream>
using namespace std;

int fibonnaci(int n){
	if (n ==0||n==1){
		return 1;
	}
	else{
		return fibonnaci(n-2) + fibonnaci(n-1);
	}
}
int main(){
	int n = 5;
	int fib = fibonnaci(5);
	cout << fib<< " is the answer"; 
	return 0;
}