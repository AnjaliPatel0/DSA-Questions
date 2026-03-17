#include<iostream>
using namespace std;
void print(int *arr,int s,int e){
   cout<<endl;
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool BinarySearch(int *arr,int s,int e,int k){
    print(arr,s,e);
    if(s>e)
     return false;
     
     int mid= s+(e-s)/2;
     
     if(arr[mid]==k)
      return true; 
    

    if(arr[mid]<k){
        return BinarySearch(arr,mid+1,e,k);
    }else{
        return BinarySearch(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[5]={2,5,6,8,9};
    int size=5;
    int key= 5;
    cout<<"Present or not "<< BinarySearch(arr,0,4,key)<<endl;

    
}