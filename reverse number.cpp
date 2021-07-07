#include<iostream>

int main(){
	//reversing number algorithm 
	int y;
	int reversed = 0;
	
	std::cout<<" Please input a number: ";
	std::cin>> y;
	
	while (y != 0){					
		reversed *= 10;
		reversed += y % 10;
		y /= 10;
	}
	std::cout<<"Reversed : "<<reversed;

	return 0;
}




