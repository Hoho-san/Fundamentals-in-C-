#include<iostream>

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

    string candidates[5];
    int votes[5];
    double candidate001 = 0, candidate002 = 0, candidate003 = 0, candidate004 = 0, candidate005 = 0;
    int total_votes;
    cout<< endl ;
    for (int i = 0; i < 5; i++){
        cout<<"Enter the last name of Candidate: ";
        cin>> candidates[i];
        cout<<"Enter Number of Votes: ";
        cin>> votes[i];
    }  
    total_votes = votes[0] +votes[1] +votes[2] +votes[3] +votes[4];
    candidate001 = percent(votes[0], total_votes);
    candidate002 = percent(votes[1], total_votes);
    candidate003 = percent(votes[2], total_votes);
    candidate004 = percent(votes[3], total_votes);
    candidate005 = percent(votes[4], total_votes);
    cout << endl;

    cout<<"Candidate        Vote Received       % of Total Votes\n";
    cout<<candidates[0] << "                " << votes[0] <<"                "<< candidate001 << endl;
    cout<<candidates[1] << "                 " <<votes[1] <<"                "<< candidate002 << endl;
    cout<<candidates[2] << "                  " << votes[2] <<"                "<< candidate003 << endl;
    cout<<candidates[3] << "               " << votes[3] <<"                "<< candidate004 << endl;
    cout<<candidates[4] << "                " << votes[4] <<"                "<< candidate005 << endl;
    cout<<"Total: " << "                " << total_votes << endl << endl;

    if (candidate001 > candidate002 && candidate001 > candidate003 && candidate001 > candidate004 && candidate001 > candidate005){
        cout<<"The Winner of the Election is " << candidates[0] ;
    }else if (candidate002 > candidate001 && candidate002 > candidate003 && candidate002 > candidate004 && candidate002 > candidate005){
        cout<<"The Winner of the Election is " << candidates[1] ;
    }else if (candidate003 > candidate001 && candidate003 > candidate002 && candidate003 > candidate004 && candidate003 > candidate005){
        cout<<"The Winner of the Election is " << candidates[2] ;
    }else if (candidate004 > candidate001 && candidate004 > candidate003 && candidate004 > candidate002 && candidate004 > candidate005){
        cout<<"The Winner of the Election is " << candidates[3] ;
    }else if (candidate005 > candidate001 && candidate005 > candidate003 && candidate005 > candidate004 && candidate005 > candidate002){
        cout<<"The Winner of the Election is " << candidates[4] ;
    }
    
    return 0;
}