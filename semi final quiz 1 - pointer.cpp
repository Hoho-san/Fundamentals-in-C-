#include<iostream>
using namespace std;

int main(){
	int number;
	int *pointer = &number;
	
	cout << "Input a number: ";
	cin >> number;
	
	cout << "You Entered: "<< *pointer ;

	return 0;
	
}
