#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
     

     int mid=(start+end)/2;  
     int ans=-1;

    
    while(start<=end){
        if(arr[mid]==key){
            ans= mid;
            end=mid-1;
        }
  

        // go to right side
       else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }

         mid=(start+end)/2;

       
    }
    return ans;

}
int lastOccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
     

     int mid=(start+end)/2;  
     int ans=-1;

    
    while(start<=end){
        if(arr[mid]==key){
            ans= mid;
            start=mid+1;
        }
  

        // go to right side
       else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }

         mid=(start+end)/2;

       
    }
    return ans;

}
int main(){
    int even[12]={5,6,12,12,12,12,12,12,12,12,15,23};
    

    int firstindex= firstOccurence(even,12,12);
    cout<<"firstOccurence of 12 is at index  " <<firstindex<<endl;

    
    int lastindex= lastOccurence(even,12,12);
    cout<<"lastOccurence of 12 is at index " <<lastindex<<endl;
 
    return 0;
}