// Number of 1 bits 
//input n= 0000000000000000000000000000000000001011
//output = 3
#include<iostream>
using namespace std;
    int main( ){
        int n;
        cout<<"enter a number n"<<endl;
        cin>>n;

        int count=0;
        while(n!=0){
        // checking last bit
        if(n&1){
         count++;
        }

        n=n>>1;
    }
        cout<< count;
} 
       