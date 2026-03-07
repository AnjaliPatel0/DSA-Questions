#include<iostream>
using namespace std;
void reverse(int arr[],int n){
   int start=0;
   int end=n-1;

   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[8]={4,5,6,7,8,9,1,3};
    int brr[5]={2,4,5,6,7};
    
    reverse(arr,8);
    reverse(brr,5);

    printArray(arr,8);
    printArray(brr,5);
}

// find unique
// find duplicate
// triplet sum
// pair sum
//sort 0's & 1's
// array intersection
// array alternate input ={1,2,3,4,5,6}
// output= { 2,1,4,3,6,5}