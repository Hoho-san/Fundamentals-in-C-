#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<< " Number: ";
	cin>> num;
	int factorial = 1;
	for (int i= 1; i <= num; i++){
		factorial = factorial * i;
	}
	cout<< factorial;
	
	system("pause>0");
}
