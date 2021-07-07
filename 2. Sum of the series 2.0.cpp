#include <iostream>
using namespace std;

int main()

{ 
	
	int i;
	int nth,
	ans,ans2 = 0;

cout<< " Input the value for nth term: ";
cin>> nth;
for (int i = 1; i <= nth; i++) 

{
	ans2 = ans2 + (i*i);
	ans = i*i;
  	cout << i <<" * "<<i <<" = "; cout<< ans;
	cout<< "\n";
}
{

  	cout <<"The sum of the above series is: "<< ans2;
	}
  
  return 0;
}

