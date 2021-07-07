#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	char ans; 
	//LOOP Starts here
	for {
		system("cls");
	
	int sel;
  int num1,num2,sum,dif,prod,quo;
	 
  cout<< "***MENU***\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n";
  cout<< "Input Selection: ";
  cin>>sel;
  
  if (sel==1)
  {
  	system("cls");
  	cout<<"****ADDITION*****"<<endl;
  	cout<<"Input first Number: ";
  	cin>>num1;
  	cout<<"Input Second Number: ";
	cin>>num2;
	sum=num1+num2;
	cout<<"The Sum is: "<<sum<<endl;
	
  }
   else if (sel==2)
  {
  	system("cls");
  	cout<<"****Subtraction*****"<<endl;
  	cout<<"Input first Number: ";
  	cin>>num1;
  	cout<<"Input Second Number: ";
	cin>>num2;
	dif=num1-num2;
	cout<<"The Difference is: "<<dif<<endl;
	
  }
  else if (sel==3)
  {
  	system("cls");
  	cout<<"****Multiplication*****"<<endl;
  	cout<<"Input first Number: ";
  	cin>>num1;
  	cout<<"Input Second Number: ";
	cin>>num2;
	prod=num1*num2;
	cout<<"The Product is: "<<prod<<endl;
	
  }
  else if (sel==4)
  {
  	system("cls");
  	cout<<"****Division*****"<<endl;
  	cout<<"Input first Number: ";
  	cin>>num1;
  	cout<<"Input Second Number: ";
	cin>>num2;
	quo=num1/num2;
	cout<<"The Quotient is: "<<quo<<endl;
	
  }
  else if (sel==5)
  {	
  	system("cls");
  	cout<<"Exiting...."<<endl;
  	
	
  }
  
  cout<<"Try Again? (Y/N) "<<endl;
  cin>>ans;
 } while(ans=='Y' or ans == 'y');

  return 0;
}
