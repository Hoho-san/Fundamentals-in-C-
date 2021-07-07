#include <iostream>
using namespace std;
int side, peri1, peri2;	
void myFunction() {
  cout << "The Area of a square is: "<<side*side<< endl;
  cout << "The Area of Rectangle is: " << peri1 * peri2 << endl;
  cout << "The Perimeter of a Square is: "<< side*4<< endl;
  cout << "The Perimeter of a rectangle is: " << peri1 + peri2 + peri1 + peri2<< endl;
}

int main() {
	
	cout<< "Enter Side of a square: ";
	cin>> side;
	cout<< "Enter Length and Breadth of Rectangle: ";
	cin >> peri1;
	cin>>peri2;
	cout << endl;
	
  myFunction();
  return 0;
}

