#include<iostream>
using namespace std;
int main () {
  
	int grade1,grade2,grade3;
    string name1;
   double average;
   char again;
   do {
   cout<<"________________________________________";
   cout<<endl;  
   cout << "Enter the Student Name: ";
   cin>>name1;
	cout<<endl;	
	cout<<"Enter the 1st Grade: ";
	cin>>grade1;
	cout<<endl;
	cout<<"Enter the 2nd Grade: ";
	cin>>grade2;
	cout<<endl;
	cout<<"Enter the 3rd Grade: ";
	cin>>grade3;
	cout<<endl;
	average = (grade1+grade2+grade3)/3;
	cout<<"The Average of "<<name1;
	cout<< " is "<< average;
	cout<<endl;
	cout<<endl;
	cout<<"The Remarked is: ";	

	if (average >= 50 && average <=100){cout<< "Passed";}
	else if (average >= 0 && average <50){cout<< "Failed";}
  else {cout<<"Invalid Grade";}
	cout<<endl;
	cout<<endl;
	cout<<"Would you like to try it again? (Y for yes/N for no): ";
	cin>>again;}
	
	while (again == 'Y' || again == 'y');
	("pause");
	return 0;
}

