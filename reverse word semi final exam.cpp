#include<iostream>
#include<string>
using namespace std;

	void display(string &word);
	
int main(){
	string word;
	
	cout << "Enter a String: ";
	getline(cin, word);
	cout << endl;
		
	cout << "The string after changing the order of each word: ";
	string *rev = &word;
	display(*rev);
	
	return 0;
}

void display(string &word)
{	
	int x = word.length();
	for(int i = x; i >= 0 ; i--){
	cout<< word[i];
	}	
}
	

