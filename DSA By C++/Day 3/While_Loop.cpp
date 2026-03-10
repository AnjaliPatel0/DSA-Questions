#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter value of n"<<endl;
   cin>>n;
   int i =1;
   //print n numbers
   while(i<=n){
    cout<<i<<" "<<endl;
    i=i+1;
   } 

  
   // print sum of N number
   int m;
   cout<<"Enter value of m"<<endl;
   cin>>m;
   int a =1;
   int sum=0;
   while(a<=m){
    sum=sum+a;
     a=a+1;
    
   }
   cout<<"sum of n number is :"<<sum<<endl;

   //print sum of all even numbers 
   int x;
   cout<<"Enter value of x"<<endl;
   cin>>x;
   int b =2;
   int sum1=0;
   while(b<=x){
    sum1=sum1+b;
     b=b+2;
    
   }
   cout<<"sum of  even number is :"<<sum1<<endl; 
   
   
}
