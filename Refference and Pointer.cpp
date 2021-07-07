#include<iostream>
using namespace std;
int main()
{
/*
	&  = address of operator
	&x = memory address of x (to get the location of data)
	*y  = pointing the value in the assign memory address(&x)	
*/
	int a = 5;
	int &b = a;
	int *c = &a;
	
	cout << b  <<endl; // 5			
	cout << &a <<endl; // 0x6ffe14		
	cout << &b <<endl; // 0x6ffe14		
	cout << *c <<endl; // 5
	
	int x = 4;
	int y = 2;
	
	swap(x,y);
	cout << x <<endl;
	cout << y <<endl;
	
	string food = "Pizza";
	string &meal = food;

	cout << food << "\n";  // Outputs Pizza
	cout << meal << "\n";

	return 0;
}
