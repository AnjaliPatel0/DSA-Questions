#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter  amount"<<endl;
    cin>>amount;

    int notes100=0,notes50=0,notes20=0,notes1=0;
    // How many notes of 100,50,20,1
    while(amount>0){
    switch(amount){
        case 100: notes100++;
                  amount -=100; 
                  break;
        case 50 : notes50++;
                  amount -=50; 
                  break;
        case 20 : notes20++;
                  amount -=20; 
                  break; 
        case 1  : notes1++;
                  amount -=1; 
                break; 
    }                               
 }
 cout<<"Notes of 100"<< notes100<<endl;
 cout<<"Notes of 50"<< notes50<<endl;
 cout<<"Notes of 20"<< notes20<<endl;
 cout<<"Notes of 1"<< notes1<<endl;

}
