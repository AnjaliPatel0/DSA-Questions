#include<iostream>
using namespace std;
// reverse an array using 1 pointer
void Reverse(int i,int arr[],int n){
    if(i>=n/2)
       return;
    swap(arr[i],arr[n-i-1]);
    Reverse(i+1,arr,n);   
}
//  reverse an array using recurion 2 pointer
void Reverse1(int i,int arr[],int n){
    if(i>=n)
       return;
    swap(arr[i],arr[n]);
    Reverse1(i+1,arr,n-1); 
} 

// check string palindrome
bool Palindrome(int i,string &s){
  if(i>=s.size()/2) 
    return true;
  if(s[i]!=s[s.size()-i-1]) return false;
  return Palindrome(i+1,s);  
}

//  Fibonacci Number
int fibonacci(int n){
  if(n<=1)
     return n;
  int last=fibonacci(n-1);
  int slast=fibonacci(n-2);
  return last+slast;

}
int main(){
    // string s="madam";
    // cout << Palindrome(0,s);
    int n;
    cin>>n;
    cout << fibonacci(n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //   cin>>arr[i];
    // }  
    // Reverse1(0,arr,n-1)  ;
    // for(int i=0;i<n;i++){
    //   cout<<arr[i]<<" ";
    // }
}