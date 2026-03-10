#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    //print simple * in row and col 
     
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    //print this pattern 1 1 1 
    //                   2 2 2
    //                   3 3 3

    int m;
    cout<<"enter the value of m "<<endl;
    cin>>m;
    int x=1;
    while (x<=m){
        int y=1;
        while(y<=m){
            cout<<x;
            y=y+1;
        }
        cout<<endl;
        x=x+1;
    }
}