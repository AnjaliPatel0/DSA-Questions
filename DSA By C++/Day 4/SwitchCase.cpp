#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter  value of A"<<endl;
    cin>>a;
    int b;
    cout<<"Enter  value of B"<<endl;
    cin>>b;

    char op;
    cout<<"Enter operator"<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<a+b<<endl;
                  break;
        case '-': cout<<a-b<<endl;
                  break; 
        case '*': cout<<a*b<<endl;
                  break;
        case '/': cout<<a/b<<endl;
                  break;
        case '%': cout<<a%b<<endl;
                  break;
        default: cout<<"Please enter a valid operation" <<endl;                                     
    }
}