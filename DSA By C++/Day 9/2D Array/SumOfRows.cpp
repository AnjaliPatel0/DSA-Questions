#include<iostream>
using namespace std;

void printRowSum(int arr[][3],int i,int j){
    cout<<"Printing Row sum "<<endl;
     for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
           sum=sum+arr[i][j] ;
        }
        cout<<sum<<" " ;
    }
    cout<<endl; 
}
void printColSum(int arr[][3],int i,int j){
    cout<<"Printing col sum "<<endl;
     for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
           sum=sum+arr[i][j] ;
        }
        cout<<sum<<" " ;
    }
    cout<<endl; 
}
int main(){
   
    int arr[3][3];
    cout<<"Enter an 2d array "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    } 
    cout<<"printing an 2d array "<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
   printColSum(arr,3,3);
 
}