#include<iostream>
using namespace std;

// input 37 output 6.01;
long long int SqrtInteger(int n){
    if(n == 0 || n == 1) return n;
    int s=0;
    int e=n-1;
    long long int mid=(s+e)/2;
    long long int ans = -1;
    while(s<=e){
      long long  int sqrt = mid*mid;
        if(sqrt==n){
            return mid;
        }
         if (sqrt<n){
            ans =mid;
            s=mid+1;
         }else{
            e=mid-1;
         }
         mid=(s+e)/2;
    }
    return ans;
    }

    double morePrecision(int n,int precision,int tempSol){
       double factor =1;
       double ans = tempSol;
       for(int i=0; i<precision;i++){
        factor= factor/10;

        for(double j=ans;j*j<n; j+factor){
            ans=j;
        }
       }
       return ans;
    }
    int main(){
       int n;
       cout<<"Enter the number "<<endl;
       cin>>n;
       
       int tempSol= SqrtInteger(n);
       cout<<"Answer is " <<morePrecision(n,3,tempSol)<<endl;
    }