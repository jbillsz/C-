#include <iostream>
// Used concepts from other coding exercises
int main(){
	// declare 'n' variable as int
	
	int n;
	std::cout<<"Please insert a number not greater than 10.\n";
	const char* greetings = "Hello world!\n";
	std::cin >>n;
	
	for(int i= 0;i<n;++i){
		std::cout<<greetings;
	}
	
	return 0;
}
