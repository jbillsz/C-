# include <iostream>

void ChangeValue( int &x) { //& by the x gives you direct access(reference)
	x = 10;
}

int main (){
	int a = 5;
	ChangeValue(a);
	std::cout<<a<<std::endl;
	return 0;
}