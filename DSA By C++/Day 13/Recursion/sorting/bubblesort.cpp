#include<iostream>
using namespace std;
void bubblesort(int *arr,int n){
   if(n==0 || n==1)
     return;

   for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
   }  

   bubblesort(arr,n-1);
}
int main(){
   int arr[5]={2,1,5,3,4};
   
   bubblesort(arr,5);
   cout<<endl;
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    
   }cout<<endl;
}