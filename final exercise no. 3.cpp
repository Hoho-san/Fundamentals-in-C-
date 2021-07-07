#include <iostream>
using namespace std;

int main()
{
	int x=0, y= 1 , next = x+y, num;
	cout<<"Enter a positive integer: ";
	cin>>num;
	cout<<endl;
	cout<<x<<", "<<y<<", ";
	while(next<=num)
	{
		cout<<next<<", ";
		x=y;
		y=next;
		next= x+y;
	}
	return 0;
}
