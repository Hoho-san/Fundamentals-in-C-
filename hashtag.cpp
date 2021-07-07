#include <iostream>
using namespace std;

int main()
{
    int side;
    cout<<"     Print a pattern like square with # character:"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Input the number of characters for a side: ";
	cin>>side;
    for (int i = 1; i <= side; i++ ) 
    {
    	
        for (int col = 1; col <= side; col++) 
        {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}
