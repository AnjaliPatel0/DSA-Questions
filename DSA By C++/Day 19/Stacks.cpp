#include<iostream>
#include<stack>
using namespace std;
int  main(){
    // creation of a stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout<<"printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is not empty "<<endl;
    }else{
        cout<<"stack is no empty "<<endl;

    }

    cout<<"size of stack is "<<s.size()<<endl;
}