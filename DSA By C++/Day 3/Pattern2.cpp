#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter the value of n "<<endl;
    // cin>>n;
    // //print * 
    // //      * *
    // //      * * *

    // int i= 1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<" *";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // int m;
    // cout<<"enter the value of m "<<endl;
    // cin>>m;
    // //print 1 
    // //      2 2
    // //      3 3 3

    // int i1= 1;
    // while(i1<=m){
    //     int j1=1;
    //     while(j1<=i1){
    //         cout<<i1;
    //         j1=j1+1;
    //     }
    //     cout<<endl;
    //     i1=i1+1;
    // }

    // int p;
    // cout<<"enter the value of p"<<endl;
    // cin>>p;
    // //print 1 
    // //      2 3
    // //      3 4 5 

    // int i2= 1;
    // while(i2<=p){
    //     int j2=1;
    //       int count = i2;
    //     while(j2<=i2){
    //         cout<<count<<" ";
    //         count=count+1;     
    //         j2=j2+1;
    //     }
    //     cout<<endl;
    //     i2=i2+1;
    //}

    int c;
    cout<<"enter the value of c"<<endl;
    cin>>c;
    //print 1 
    //      2 1
    //      3 2 1 

    int i3= 1;
    while(i3<=c){
        int j3=1;
        
        while(j3<=i3){
            cout<<i3-j3+1<<" ";
                 
            j3=j3+1;
        }
        cout<<endl;
        i3=i3+1;
    }
}
