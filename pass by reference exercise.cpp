#include <iostream>

void doubleFunction(int &x){
	x = 2 * x;
}

int main(){
	int a = 10;
	doubleFunction(a);
	std::cout<<"\nThe number is "<<a<<std::endl;
	return 0;
}
	
