#include<iostream>
using namespace std;
/* to find gcd 
the formula is 
gcd(a-b,b)
gcd(a%b,b)*/
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
int main(){

    int a,b;
    cout<<"enter a and b "<<endl;
    cin>>a>>b;
    int ans= gcd(a,b);
    cout<<"the GCD of "<<a <<" & "<<b<<" is: "<<ans<<endl;
}