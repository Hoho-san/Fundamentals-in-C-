#include <iostream>
using namespace std;

int main()

{
    int side;
    
	cout<<"Enter the  number of maximum side: ";
	cin>>side;
	cout<<endl;
    for (int i = 1; i<= side; i++) 
    {
    	
        for (int col = 1; col <= i; col++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
