#include<iostream>
using namespace std;
int getMin(int num[],int n){
    int min=  INT16_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int getMax(int num[],int n){
    int maxi=  INT16_MIN;
    for(int i=0;i<n;i++){

        maxi=max(maxi,num[i]);
        // if(num[i]>max){
        //     max=num[i];
        // }
    }
    return maxi;
}
int main(){
    int size;
    cout<<"Enter  size of array"<<endl;
    cin>>size;

    int num[100];
    cout<<"Enter number of array "<<endl;
    //taking input in array
    for(int i=0;i<size;i++){
       
        cin>>num[i];
    }
    cout<<"Maximmum value is "<<getMax(num,size)<<endl;
    cout<<"Minimum value is "<<getMin(num,size)<<endl;
}