#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value of n:"<<endl;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<" Not Prime numbers for "<< i <<endl;    
        }
        else{
            cout<<"prime for "<< i <<endl;
        }
         i=i+1;
     
    }
}