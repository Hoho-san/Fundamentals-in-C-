#include<iostream>
using namespace std;
int main()
{
    char Roman1;
    char Roman2;
    int rmn1;
    int rmn2;
    int answer;
    cout<<"This is Roman Numeral Addition"<<endl;

    cout<<"Enter the 1st Roman: ";
    cin>>Roman1;
 {
    if (Roman1 == 'I' || Roman1 == 'i'){rmn1=1;}
    
    else if (Roman1 == 'V' || Roman1 == 'v'){rmn1=5;}
    
    else if (Roman1 == 'X' || Roman1 == 'x'){rmn1=10;}
    
    else if (Roman1 == 'L' || Roman1 == 'l'){rmn1=50;}
    
    else if (Roman1 == 'C' || Roman1 == 'c'){rmn1=100;}
    
    else if (Roman1 == 'D' || Roman1 == 'd'){rmn1=500;}
    
    else if (Roman1 == 'M' || Roman1 == 'm'){rmn1=1000;}
    
    else cout<<"Invalid Input";
    cout<<endl;
 }   
    cout<<"Enter the 2nd Roman: ";
    cin>>Roman2;
 {
    if (Roman2 == 'I' || Roman2 == 'i'){rmn2=1;}
    
    else if (Roman2 == 'V' || Roman2 == 'v'){rmn2=5;}
    
    else if (Roman2 == 'X' || Roman2 == 'x'){rmn2=10;}
    
    else if (Roman2 == 'L' || Roman2 == 'l'){rmn2=50;}
    
    else if (Roman2 == 'C' || Roman2 == 'c'){rmn2=100;}
    
    else if (Roman2 == 'D' || Roman2 == 'd'){rmn2=500;}
  
    else if (Roman2 == 'M' || Roman2 == 'm'){rmn2=1000;}
    
    else cout<<"Invalid Input";
    cout<<endl;
}    
    answer = rmn1 + rmn2;
    cout<<"The answer is: "<<answer;
    
    return 0;   
    
}
