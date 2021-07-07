#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout<<"Program to print pyramid using numbers\n\n";
	int n=5;
	for(int i = 1;i <= n; i++ )
	{
		for(int j = 5; j>= i ; j--)
		cout<<" ";
		for(int k = 1 ; k <= 2*i-1; k++)
		{
			cout<<(i+1);
		}
		cout <<endl;
	}
	return 0;
}
