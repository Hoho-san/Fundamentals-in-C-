#include<iostream>

using namespace std;

int main()
{	int x;

	
	std::cout<<"---Binary Number---\n";
	std::cout<<"Input a number: ";
	std::cin>>x;
	std::cout<<"Binary : ";
	
	int remainder;
	int result;
	
	for(int i = x; i > 0 ; i/=2){		//binary algorithm
		remainder = x % 2;				
		result = x / 2;
		x = result;
		std::cout<<remainder;			//remainder = 01011
	}
	
	return 0;
}
