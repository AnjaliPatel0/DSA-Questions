#include<iostream>
using namespace std;
int main(){

    /* arr[i]=*(arr+i) or
     i[arr]=*(i+arr)*/
    /*int arr[10]={23,122,41,67};


    cout<<"address of first memory block is "<<arr<<endl;
    cout<<arr[0];
    cout<<"address of first memory block is "<<&arr[0]<<endl;
    
    cout<<"1th "<<*arr<<endl;
    cout<<"2nd "<<*arr + 1<<endl;
    cout<<" 3nd "<<*(arr+1)<<endl;
    cout<<"4th "<<*(arr)+1<<endl;
    cout<<"5th "<<arr[2]<<endl;
    cout<<"6th "<<*(arr+2)<<endl; */

    int temp[10]={2,3,4};
    cout<<sizeof(temp)<<endl;
    cout<<"1st "<<sizeof(*temp)<<endl;
    cout<<"2nd "<<sizeof(&temp)<<endl;
    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
}
