#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n>0){
    cout<<"N is positive:"<<endl;
   } 
   else{
    cout<<"N is negative:"<<endl;
   }

   
   // a=cin.get() the output print all enter, space All ASCII value 
   // Print A is negative,,positive,ZERO
   int a;
   cout<<"Enter the value of a"<<endl;
   cin>>a;
   if(a>0){
    cout<<"A is positive"<<endl;
   }
   else{
    if(a<0){
        cout<<"A is negative"<<endl;

    }else{
        cout<<"A is f ZERO";
    }
   }


}