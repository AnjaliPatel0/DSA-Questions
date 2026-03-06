#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;

    // // Sum of All N numbers
    // int sum =0;
    // for(int i =0;i<n;i++){
    //     sum=sum+i;
    // }
    // cout<<sum<<endl;

    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;

    //Fibonacci
//     int a=0;
//     int b=1;
//     cout<<a<<" "<<b<<" "<<endl;
//      int sum=0;
//     for(int i=0;i<n;i++){
//         sum=a+b;
//         cout<<sum<<endl;
//         a=b;
//         b=sum;
//     }

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    bool isPrime=1;
    // Prime Number
     for(int i=2;i<n;i++){
        if(n%i==0){
            //cout<<"Not a Prime  Number"<<endl;
            isPrime=0;
            break;
        }
       
     }
     if(isPrime==0){
        cout<<"Not a Prime  Number"<<endl;
     }else{
        cout<<"Is a Prime  Number"<<endl;
     }

}