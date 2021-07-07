#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name;
	char ans;
	int  W, X, Y ,Z;
	do {
	cout<<"\n\n**********Ordering System***********\n";
	cout<<endl;
	cout<<"Enter the Costumer Name: ";
	cin>>name;
	cout<<endl;
	
	cout<<"Enter the Type of Meal: ";
	cin>>W;
	cout<<"[1 for Meal(Burger Fries Drinks),2 for Meal(cheese Burger , Fries, Drinks), 3 for Meal(Spaghetti, Fries, Drinks)";
 	
	{
	if (W == 1){ X = 75;}
	else if (W == 2){ X= 100;}
	else if (W == 3){ X = 120;}
	else
	{cout<<"not applicable";
	}
	cout<<endl;
	cout<<endl;
	cout<<"Enter the number of Order: ";
	cin>> Y;
	cout<<endl;
}
    Z = Y* X;
    
 	cout<<"Total Amount of ";
 	cout<<name;
 	cout<<" order is: ";
 	cout<<Z;
 	
 	cout<<endl;
 	
  	cout<<endl;	
  cout<<"Try Again? (Y/N) "<<endl;
  cin>>ans;
 } while(ans=='Y' or ans == 'y');

  return 0;

}
