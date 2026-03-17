#include<iostream>
using namespace std;

// print n numbers 
int print(int n){
    if(n==0)
     return 1;
    
    cout<<n<<endl;
    print(n-1); 
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);
}