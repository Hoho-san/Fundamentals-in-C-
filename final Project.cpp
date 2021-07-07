#include<iostream>
#include<string>
using namespace std;

struct User{
	string first_name;
	string last_name;
};	
void user_detail (string first_name, string last_name){
	cout<< "Enter First Name: ";
	cin >> first_name;
	cout<< "Enter Last Name: ";
	cin>> last_name;
	cout <<"\n";
}
void allMonths(){
	cout << "Select Your Birth Month: \n\n";
	cout << "[1] January\t\t [5] May\t\t [9] September\n" ;
	cout << "[2] February\t\t [6] June\t\t [10] October\n";
	cout << "[3] March \t\t [7] July \t\t [11] November\n";
	cout << "[4] April\t\t [8] August\t\t [12] December\n\n";
}
void selectionmonth(int a){
	if ( a == 1){
		cout << "Select day in January\n";
		for (int i = 1; i <=31; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 2){
		cout << "Select day in February\n";
		for (int i = 1; i <=29; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 3){
		cout << "Select day in March\n";
		for (int i = 1; i <=31; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 4){
		cout << "Select day in April\n";
		for (int i = 1; i <=30; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 5){
		cout << "Select day in May\n";
		for (int i = 1; i <=31; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 6){
		cout << "Select day in June\n";
		for (int i = 1; i <=30; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 7){
		cout << "Select day in July\n";
		for (int i = 1; i <=31; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 8){
		cout << "Select day in August\n";
		for (int i = 1; i <=31; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 9){
		cout << "Select day in September\n";
		for (int i = 1; i <=30; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 10){	
		cout << "Select day in October\n";
		for (int i = 1; i <=31; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 11){
		cout << "Select day in November\n";
		for (int i = 1; i <=30; i++){
			cout << "[" << i << "] ";
		}
	}else if (a == 12){
		cout << "Select day in December\n";
		for (int i = 1; i <=31; i++){
			cout << "[" << i << "] ";
		}
	}else {
		cout<< "Wrong Input";
	}
}

int main(){
	string firstname;
	string lastname;
	int month;
	int day;
	
	user_detail(firstname,lastname);
	allMonths();
	cout << "Select number of your Birth Month: " ;
	cin >> month; 
	selectionmonth(month);
	
	cout << "Select day of your Birthday: ";
	cin >> day;
	

	
	return 0;
}
