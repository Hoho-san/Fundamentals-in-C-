#include<iostream>
#include <conio.h>

using namespace std;

double percent( double numvotes, double total){
    if (numvotes == 0){
        return 0;
    }else{
        double totalpercent = (numvotes/total) * 100;
    return totalpercent;
    }
    
}

int main(){
    string candidate;
    char ans;
    string candidates[5] = {"Johnson", "Miller", "Duffy", "Robinson", "Ashtony"};
    int johnson = 0, miller = 0, duffy = 0, robinson = 0, ashtony = 0, total_voter = 1;
    double percentJohn = 0, percentMil = 0, percentDuf= 0, percentRob= 0, percentAsh= 0;
    do{
    system("cls");
    cout<<"*****Voting Program*****\n";
    cout<<"Enter the name of candidate: ";
    cin>>candidate;
    cout << endl;

    if (candidate == candidates[0]){
        johnson = johnson + 1;
    }else if(candidate == candidates[1]){
        miller = miller + 1;  
    }else if(candidate == candidates[2]){
        duffy = duffy + 1;
    }else if(candidate == candidates[3]){
        robinson = robinson + 1;
    }else if(candidate == candidates[4]){
        ashtony = ashtony + 1;
    }else {
        cout<<"Invalid Candidate!\n";
    }

    percentJohn = percent(johnson, total_voter);
    percentMil = percent(miller, total_voter);
    percentDuf = percent(duffy, total_voter);
    percentRob = percent(robinson, total_voter);
    percentAsh = percent(ashtony, total_voter);


    cout<<"Candidate        Vote Received       % of Total Votes\n";
    cout<<candidates[0] << "                " << johnson <<"                "<< percentJohn << endl;
    cout<<candidates[1] << "                 " << miller <<"                "<< percentMil << endl;
    cout<<candidates[2] << "                  " << duffy <<"                "<< percentDuf << endl;
    cout<<candidates[3] << "               " << robinson <<"                "<< percentRob << endl;
    cout<<candidates[4] << "                " << ashtony <<"                "<< percentAsh << endl;
    cout<<"Total: " << "                " << total_voter << endl << endl;

    total_voter ++;
    cout<<"End Voting? (Y/N):  ";
    cin>> ans;
    }
    
    while(ans == 'N' or ans == 'n');

    if (johnson > miller && johnson > duffy && johnson > robinson && johnson > ashtony){
        cout<<"The Winner of the Election is Johnson";
    }else if (miller > johnson && miller > duffy && miller > robinson && miller > ashtony){
        cout<<"The Winner of the Election is Miller";
    }else if (duffy > miller && duffy > johnson && duffy > robinson && duffy > ashtony){
        cout<<"The Winner of the Election is Duffy";
    }else if (robinson > miller && robinson > duffy && robinson > johnson && robinson > ashtony){
        cout<<"The Winner of the Election is Robinson";
    }else if (ashtony > miller && ashtony > duffy && ashtony > johnson && ashtony > johnson){
        cout<<"The Winner of the Election is Ashtony";
    }  
    return 0;
}
