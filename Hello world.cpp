#include <iostream>

int main(){
	std::cout << "Hello, world! \n";
	int x;
	int y;
	std::cin>> x>> y; 
	std::cout<< x /3 <<" " << x*3<<" "<<y <<"\n"; // Rendering multiple outputs. use double quotes and not single for spacing
	
	if(x>y){
		std::cout<<x<<" is greater than "<< y;
	}
	else if (y>x){
		std::cout <<y << " is greater than " << x;
	}
	
	else{
		std::cout <<"\nThey are equal.";
	}
	
	switch (x){
		case 3:
			std::cout<<"\nX is 3\n";
			break;
		
		case 1:
			std::cout <<"\nX is 1\n";
			break;
			
		default:
			std::cout <<"\nX is " << x <<". It's neither 1 or 3.";
			// default has no break statement;
			
			
	}
	//========== While loops==========
	// Needs a condition to be false so the loop terminates so keeping it with the counter y from input.
	// Looks like if else statement though.
	while(y< 20){
		std::cout<<"\nLouis is the greatest research engineer to ever live." ;
		y= y + 1; 
	}
	
	// Don't put code after the return jump statement, won't work.
	//=========== For loops ===========
	// Whilst while loops like to write conditions and initialization explicitly,for loops does everything in the brackets
	for(x;x<20; x =x +1){
		std::cout<<"\nLouis might actually be the goat";
	}
	// can see why while loops will be more error prone since everything has to be defined later, but for forloops everything is kinda upfront.
	
	// Nested control structures
	
	if (y<x){
		if (y ==6){
			std::cout<<"Well this is weird";
		}
	}
	else if(y>x){
		if (y>7){
			std:: cout<< "Expected this";
		}
	}
	else{
		std::cout<< "Let's coo k.\n";
	}

	// Logic might be broken as i didn't give it much thought but i only did it to see problems i might encounter
	// becareful of where each curly braces appear because it migt treat branches as continuation in the first if statement.kinda a scope problem
	// =========== Ternary Operator==========
	int a;
	int b;
	std:: cin>>a >>b;
	int	result = (a > b)?x:y;
	std:: cout<<"\n"<< result;
	\\ still need to declare result variable though	
		return 0;

}
