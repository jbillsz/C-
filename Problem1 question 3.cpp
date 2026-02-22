# include <iostream>

int main() {
	const char* greetings = "Hello, World!\n";
	int n;
	std:: cout <<"Please Enter a number\n"; 
	std::cin>>n;
	int i = 0;
	
	while(i < n){
		std::cout<<greetings;
		i = i + 1;
	}
	return 0;
}