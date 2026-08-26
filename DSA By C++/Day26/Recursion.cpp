// print n times name using recursion
#include<iostream>
using namespace std;
void fun(int i,int n){
  if(i>n)
    return;
  cout<<"Anjali"<<endl;
  fun(i+1,n);  
}
// print linearly from 1 to N
void fun1(int i,int n){
  if(i>n)
    return;
  cout<<i<<endl;
  fun1(i+1,n);  
}

// print in terms of N to 1
void fun2(int i,int n){
  if(i<1)
    return;
  cout<<i<<endl;
  fun2(i-1,n);  
}
// print from 1 to N by backtrack
void fun3(int i,int n){
  if(i<1)
    return;
  
  fun3(i-1,n);  
  cout<<i<<endl;
}
// print from N to 1 by backtrack
void fun4(int i,int n){
  if(i>n)
    return;
  
  fun4(i+1,n);
  cout<<i<<endl;  
}

//  print sum of first N numbers
void fun5(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    fun5(i-1,sum+i);
}
// print sum of n numbers by functional
int fun6(int n){
 if(n==0)
    return 0;
 return n +  fun6(n-1);   
}

// print factorial
int fact(int n){
 if(n==1)
  return 1;
 return n* fact(n-1); 
}
int main(){
    int n;
    cin>>n;
    //  fun1(1,n);
    // fun4(n,n)
    //  fun5(n,0);
    // cout<<fun6(n);
    cout<<fact(n);
}


