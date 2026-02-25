#include <iostream>

int main(){
	int n;
	std::cout << "How many numbers are you putting in:\n";
	std::cin>>n;
	
	int first;
	int max; int min; double mean;
	
	std::cout<< "Enter first number:\n";
	std::cin>> first;
	n = n - 1;
	double accumulate = first;
	max = first; min = first;
	for(int i = 0; i< n; ++i){
		std::cout<< "Enter next number:";
		int num;
		std::cin>>num;
		accumulate += num;
		if( max < num){
			max = num;
		}
		if (min > num){
			min = num;
		}
	}
	// next to do is calculate mean, print out min,max, mean
	mean = accumulate / (n+1);
	std::cout<<"Mean: "<< mean<<"\n";
	std::cout<<"Max: "<< max<<"\n";
	std::cout<<"Min: "<< min<<"\n";
	return 0;
}
