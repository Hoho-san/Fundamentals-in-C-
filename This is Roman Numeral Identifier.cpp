#include <iostream> 
using namespace std; 
int main(){ 

char roman; 
cout<<"This is Roman Numeral Identifier"<<endl;
cout<<"Enter the Roman Numeral: "; 
cin>>roman; 
if(roman == 'I' or roman == 'i') { 
cout<<"1"; } 
else if(roman == 'V' or roman == 'v') { 
cout<<"5"; } 
else if(roman == 'X' or roman == 'x') { 
cout<<"10"; } 
else if(roman == 'L' or roman == 'l') { 
cout<<"50"; } 
else if(roman == 'C' or roman == 'c') { 
cout<<"100"; } 
else if(roman == 'D' or roman == 'd') { 
cout<<"500"; } 
else if(roman == 'M' or roman == 'm') { 
cout<<"1000"; } 
else { 
cout<<"Invalid Roman Numeral"; } 

return 0; }
