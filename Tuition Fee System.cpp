#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name;
	char ans;
	int  W, X, Y ,Z;
	do 
	{

		cout<<"\n\n**********TUITION FEE System***********\n";
		cout<<endl;
		cout<<"Enter the Student Name: ";
		cin>>name;
		cout<<endl;
	
		
		cout<<"Enter the Tuition Fee: ";
		cin>>W;
		cout<<"[1 for Cash,2 for Two Payments, 3 for Three Payments]";
	 	
		
		cout<<endl;
		cout<<endl;
		cout<<"Enter the mode of Payment: ";
		cin>> Y;
		cout<<endl;
		{
			
			if (Y == 1){ Z = W-(W* 0.10);}
			else if (Y == 2){ Z=W+( W *0.05);}
			else if (Y == 3){ Z =W+( W*0.10);}
			else
			{
				cout<<"not applicable";
			}
	
		}
	    
		cout<<"Total tuition Fee of ";
	 	cout<<name;
	 	cout<<" is: ";
	 	cout<<Z;
	 
	 	cout<<endl;
	 	
	  	cout<<endl;	
	 	cout<<"Try Again? (Y/N) "<<endl;
	  	cin>>ans;	  
	}
		while(ans=='Y' or ans == 'y');

  return 0;

}
