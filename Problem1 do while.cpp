#include <iostream>

int main(){
	const char* greetings = "Hello World!\n";
	int n;
	std:: cout<< "Hello there, Input a number!:\n";
	std:: cin >> n;
	
	int i = 0;
	
	do{
		std::cout<<greetings;
		i = i +1;
	}
	while (i < n);
	
	return 0;
}