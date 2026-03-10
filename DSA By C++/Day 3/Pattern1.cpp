#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a value of n" <<endl;
  cin>>n;
  
  // print pattern 1 2 3 
  //               1 2 3 
  //               1 2 3

  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }

  // print pattern 3 2 1 
  //               3 2 1 
  //               3 2 1

  int m;
  cout<<"Enter a value of n" <<endl;
  cin>>m;
  int i1 = 1;
  while (i1<=m){
    int j1=1;
    int x;
    while(j1<=m){
        x=m-j1+1;
        cout<<x;
        j1=j1+1;
    }
    cout<<endl;
    i1=i1+1;
  }

  // print pattern 1 2 3 
  //               4 5 6 
  //               7 8 9

  int u;
  cout<<"Enter a value of u" <<endl;
  cin>>u;
  int i2 = 1;
  int count=1;
  while(i2<=u){
    
    
    int j2 = 1;
    while(j2<=u){
        cout<<count<<" ";
        count=count+1;
        j2=j2+1;
    }
    cout<<endl;
    i2=i2+1;
  }
}