#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	char ans; 
	//LOOP Starts here
	do{
		system("cls");
	
	int sel;
  int num1,num2,sum,dif;
	 
  cout<< "***MENU***\n1. DEPOSIT\n2. WITHDRAW\n3. Exit\n";
  cout<< "Input Selection: ";
  cin>>sel;
  
  if (sel==1)
  {
  	system("cls");
  	cout<<"****DEPOSIT*****"<<endl;
  	cout<<"Input your total cash: ";
  	cin>>num1;
  	cout<<"Enter how much your deposit: ";
	cin>>num2;
	sum=num1+num2;
	cout<<"Total Balance is: "<<sum<<endl;
	
  }
   else if (sel==2)
  {
  	system("cls");
  	cout<<"****WITHDRAW*****"<<endl;
  	cout<<"Input your total cash: ";
  	cin>>num1;
  	cout<<"Enter how much your withdraw: ";
	cin>>num2;
	dif=num1-num2;
	cout<<"Total Balance is: "<<dif<<endl;
	
  }
  
  else if (sel==3)
  {	
  	system("cls");
  	cout<<"Exiting...."<<endl;

  }
  
  cout<<"Try Again? (Y/N) "<<endl;
  cin>>ans;
 } while(ans=='Y' or ans == 'y');

  return 0;
}
