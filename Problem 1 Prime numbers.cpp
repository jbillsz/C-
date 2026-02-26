#include <iostream>

int main(){
	int n;
	std::cout<<"Insert a range to find n prime numbers within range: ";
	std::cin >> n;
	
	for(int i = 2; i<n; ++i){
		int divisors = 0;
		for (int j = 2; j*j <= i; ++j){
			
			if(i%j==0){
				divisors +=1;
				break;
			}
		}
		if (divisors ==0){
			std::cout<<i<<" is a prime number\n";
		
		}
	}		
	return 0;
}
	// design choice, i intend to create a variable to hold the number of divisors.
	// used the competitive programming mathematical principle.
	