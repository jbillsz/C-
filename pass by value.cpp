# include  <iostream>

void changeValue(int x){
x = 10; // passes in copy
}

int main(){
	int a = 5;
	changeValue(a);
	std::cout<<a<<std::endl;
	return 0;
}