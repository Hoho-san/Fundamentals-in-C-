#include<iostream>
#include<limits>
#include<string>
#include<fstream>

using namespace std;

void selectmonth(int *months){				//pointers
	if (*months == 3 ||*months == 4 || *months == 5 ){
		if (*months == 3){
			cout << "March is Spring Season";
		}else if (*months == 4){
			cout << "April is Spring Season";
		}else if(*months == 5){
			cout << "May is Spring Season";
		}		
	}else if (*months == 6 ||*months == 7 || *months == 8 ){
		if (*months == 6){
			cout << "June is Summer Season";
		}else if (*months == 7){
			cout << "July is Summer Season";
		}else if(*months == 8){
			cout << "August is Summer Season";
		}
	}else if (*months == 9 ||*months == 10 || *months == 11 ){
		if (*months == 9){
			cout << "September is Autumn Season";
		}else if (*months == 10){
			cout << "October is Autumn Season";
		}else if(*months == 11){
			cout << "November is Autumn Season";
		}
	}else if (*months == 12 ||*months == 1 || *months == 2 ){
		if (*months == 12){
			cout << "December is Winter Season";
		}else if (*months == 1){
			cout << "January is Winter Season";
		}else if(*months == 2){
			cout << "February is Winter Season";
		}	
	}else{
		cout <<"Wrong input! ";
	}
}
void allMonths(){					//Functions
	cout << "\n\n 			Select Month\n";
	cout << "[1] January\t\t [5] May\t\t [9] September\n" ;
	cout << "[2] February\t\t [6] June\t\t [10] October\n";
	cout << "[3] March \t\t [7] July \t\t [11] November\n";
	cout << "[4] April\t\t [8] August\t\t [12] December\n\n";
}
void suggestion(int months, string name){
	if(months == 3 ||months == 4 || months == 5 || months == 9 ||months == 10 || months == 11 ){
		cout<< "\n\tHello!, " << name << " it was the the best time to visit Japan.";
	}else if (months == 6 ||months == 7 || months == 8 || months == 1 ||months == 2 || months == 12 ){
		cout<< "\n\tHello!, " << name << " its not suggestable in this month to visit" <<
		" Japan but it always upon to your budget and decisions";
	}

}
void Seasons(){
	cout << "Seasons in Japan!\n";
	string season[4] = {"Spring","Summer","Autumn","Winter"};		//Arrays
	for (int i = 0; i < 4; i++){
		cout << "[" << i+1 << "]" << season[i] << "   ";
	}
}
int main(){
	
	int month;
	string name;
		
		Seasons();
		allMonths();
		cout << "Enter your name: ";
		getline(cin, name);				//String
		cout << "Enter number of month you want to visit Japan: ";
		cin >> month;
		
		while(1)				//Input Validation
		{
			if(cin.fail())
				{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Pls Input a  valid Number! try again. :";
				cin>>month;
				}
			if(!cin.fail())
			break;
		}
	cout << endl;
	selectmonth(&month);				
	suggestion(month,name);
	
	cout << "\n\n\tInformation saved!...\n";
	
	fstream myFile;	
	myFile.open("userdata.txt", ios::app);			//File Handling
	if (myFile.is_open()){
		myFile << "Users info: ";
		myFile << name << " - " << month << endl;
		myFile.close();
	}	
	return 0;
}
