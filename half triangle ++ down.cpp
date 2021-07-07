#include <iostream>
using namespace std;

int main()
{
    int side;
    
	cout<<"Enter the  number of maximum side: ";
	cin>>side;
    for (int i = side; i>= 1; i--) 
    { 
    	
        for (int n = i; n >0; n--) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
