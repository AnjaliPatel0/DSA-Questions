#include<iostream>
using namespace std;
/*Given three integers x, n, and M, compute (xn) % M (remainder when x raised to the power n is divided by M).

Examples : 

Input:  x = 3, n = 2, M = 4
Output: 1
Explanation: 32 % 4 = 9 % 4 = 1.

Input:  x = 2, n = 6, M = 10
Output: 4
Explanation: 26 % 10 = 64 % 10 = 4.*/

int moduleExponentiation(int x,int n,int m){
  int res=1;
  while(n>0){
    if(n&1){
        //odd ((a^b/2)2)*a
        res=(1LL * (res) * (x)%m)%m;
    }
    // even ((a^b/2)2)
     x=(1LL * (x)%m * (x)%m)%m;
     n=n>>1;
  }
  return res;
}
int main(){
  int x,n,m;
    cout<<"enter a and b and m "<<endl;
    cin>>x>>n>>m;
    int ans= moduleExponentiation(x,n,m);
    cout<<ans;
}