#include<iostream>
using namespace std;
// reverse an array using 1 pointer
void Reverse(int i,int arr[],int n){
    if(i>=n/2)
       return;
    swap(arr[i],arr[n-i-1]);
    Reverse(i+1,arr,n);   
}
void Reverse1(int i,int arr[],int n){
    if(i>=n)
       return;
    swap(arr[i],arr[n]);
    Reverse1(i+1,arr,n-1); 
} 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }  
    Reverse1(0,arr,n-1)  ;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}