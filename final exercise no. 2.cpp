#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
		cout<<" Inverted full pyramid using #\n\n";
		
	int n=5;
	for(int i = n;i>= 1;i--)
	{
		for(int k = i; k<=5 ; k++)
		cout<<"  ";
		for(int j = 9 ; j >=11-(i*2);j--)
		{
			cout<<"# ";
		}
	cout<<endl;
}
	return 0;
}
