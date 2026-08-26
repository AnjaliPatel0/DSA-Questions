#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        //space
        cout<<" ";
    }
    for(int j=0;j<2*i+1;j++){
        //star
        cout<<"*";
    }
    for(int j=0;j<n-i-1;j++){
        //space
        cout<<" ";
    }
    cout<<endl;
  }
}
void print3(int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        //space
        cout<<" ";
    }
    for(int j=0;j<2*n-(2*i+1);j++){
        //star
        cout<<"*";
    }
    for(int j=0;j<i;j++){
        //space
        cout<<" ";
    }
    cout<<endl;
  }
}
int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int n;
        cin>>n;
        print2(n);
        print3(n);
    }
}