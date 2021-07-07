#include<iostream>
using std::cout;
using std::cin;
using std::endl;

double power (double base, int exponent) //they should be same in Data type
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}

int main()
{
	int base , exponent;
	cout<< "Input base: ";
	cin >> base;
	cout<< "Input exponent: ";
	cin >> exponent;
	
	double myPower = power(base, exponent); //they should be same in Data type
	
	cout<< myPower << endl;
	
	
	return 0;
}
