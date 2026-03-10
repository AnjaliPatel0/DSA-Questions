// You are given an array of integers, where each integer represents the
// number of pages in a book. There are n books and m students. The task is to
// allocate books to students subject to the following conditions:

// Each student must be assigned at least one book.
// Each book can be allocated to only one student.
// The books allocated to a student must be contiguous.
// Find out the maximum number of pages assigned to a student is minimum.

// Examples
// Example 1:

// Input: pages = [12, 34, 67, 90], m = 2
// Output: 113



#include<iostream>
using namespace std;

// input {10,20,30,40} output : 60
// minimum soln sum of pages 
bool isPosible(int arr[],int n,int m,int mid){
   int studentcount=1;
   int pageSum=0;

   for(int i=0;i<n;i++){
    if(pageSum+arr[i]<=mid){
        pageSum+=arr[i];
    }
    else{
        studentcount++;
        if(studentcount>m || arr[i]>mid){
            return false;
        }
        pageSum=arr[i];
    }
   }
   return true;
}
int Allocatebook(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for( int i=0;i<n;i++){
        sum+=arr[i];
    }

    int e=sum;
    int ans=-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(isPosible(arr,n,m,mid)){
           ans=mid;
           e=mid-1;
        }
        else{
            s=mid +1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int arr[4]={10,20,30,40};
    int n=4;
    int m=2;

   cout<<"""Possible Book Page is " <<Allocatebook(arr,n,m)<<endl;
}
