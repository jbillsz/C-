# include <iostream>

int main(){
	while(true){
		std::cout<<"Type in a number: ";
		int number;
		std::cin>>number;
		int b = -1;
		double out; 
		if(number < 0){
		continue;
		}
		else{
			out = number/5.0;
			std::cout<<"\nThe result is: "<< out <<"\n";
		}	
	}	
	return 0;
}

// comments:
// for scoping reasons had to push last cout into the else statement else would cause bugs