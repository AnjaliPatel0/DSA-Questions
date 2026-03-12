#include<iostream>
#include<vector>
using namespace std;
int main(){
  //merge two sorted array 
  
  int arr1[5]={1,2,4,6,8};
  int n=5;
  int arr2[3]={3,5,7};
  int m=3;

  int arr3[8]={0};

  int i=0 ,j=0 ,k=0;
   
  while(i<n && j<m){
     if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        k++;
        i++;
     }else{
        arr3[k]=arr2[j];
        k++;
        j++; 
     }
  }

  while(i<n){
    arr3[k]=arr1[i];
    k++;
    i++;
  }

  while(j<m){
    arr3[k]=arr2[j];
    k++;
    j++;
  }

  for(int i=0;i<n+m;i++){
    cout<<arr3[i]<<" ";
  }
}