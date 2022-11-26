#include <iostream>
using namespace std;

	
	void oddoreven(num) {
	int num;
	if (num % 2 == 0) {
		cout << num << " is a even number";
	}
	else if (num % 2 != 0){
		cout << num <<" is a odd number";
	}
}

int main ()
{	
	cout << "***A program that will Determine if the number is ODD or EVEN***\n\n";
	cout<< "Please input a number: ";
	cin >> num;
	
	oddoreven(num);
	
	return 0;
}
