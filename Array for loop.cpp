#include<iostream>
#include<string>
using namespace std;

int main(){
	
	cout<<"4 reasons why programmers prefer dark theme:\n";
	string reasons[4] = {"because", "light", "attracts", "bugs!"};
	for(int i = 0; i < 4; i++){
		cout << i + 1<< ". " << reasons[i] << "\n";
	}

	return 0;
}
