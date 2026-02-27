# include <iostream>

int main(){
	while(true){
		std::cout<<"Type in a number: ";
		int number;
		std::cin>>number;
		int b = -1;
		double out; 
		out = (number > b)?(number / 5.0):b;
		std::cout<<"\nThe result is: "<< out <<"\n";
	}	
	return 0;
}
