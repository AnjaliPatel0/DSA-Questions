#include<iostream>
using namespace std;
int factorial(int n){
    // base case
    if(n==0)
    return 1;

    return n* factorial(n-1);
}
int power(int n){
    if(n==0){
        return 1;
    }

    int smallerProblem= power(n-1);
    int biggerProblem = 2*smallerProblem;

    return biggerProblem;
}
int main(){
    int n;
    cin>>n;

    // int ans = factorial(n);

     int ans = power(n);
    cout<<ans<<endl;
}