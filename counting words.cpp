#include <iostream>
using namespace std;

int main(){
	
	char str[100];
	cout << "***It will count your words!***\n";	
	cout << "Input your text here:  ";
	cin.get(str,100);		//its like cin>>
		
	int words = 0; 			// Holds number of words	
	for(int i = 0; str[i] != '\0'; i++)		// \0 is the NULL character , you can find it in ASCII table , it has the value 0.
	{
		if (str[i] == ' ') 	//Checking for spaces
		{
			words++;
		} 		
	}
	cout << "The total words are: " << words+1 << endl;

	return 0;
}
