#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
     

     int mid=(start+end)/2;  


    // it uses when int value is large 
     //int mid =start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
  

        // go to right part
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

         mid=(start+end)/2;

       // int mid =start+(end-start)/2;
    }
    return -1;

}
int main(){
    int even[6]={4,5,6,7,8,45};
    int odd[5]= {3,5,8,10,98};

    int evenindex= BinarySearch(even,6,7);

    cout<<"Index of 7 is " <<evenindex<<endl;

     int oddindex= BinarySearch(odd,5,8);

    cout<<"Index of 8 is " <<oddindex<<endl;

}