#include <iostream>
#include <cmath>
using namespace std;
int radius;	
void myFunction() {
  cout << "The Area of Circle is: "<<M_PI*pow(radius,2)<< endl;
  cout << "The Circumference of  Circle is: " << 2* M_PI* radius<< endl;
}

int main() {
	cout<< "***Calculation of Area and Circumference of Circle***\n\n";
	cout<< "Enter the Radius: ";
	cin>> radius;
	
  myFunction();
  
  return 0;
}
