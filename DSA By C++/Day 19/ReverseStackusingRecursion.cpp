#include<iostream>
#include<stack>
using namespace std;

void reverse(stack<int> &s,int element){
    if(s.empty()){
        s.push(element);
        return;

    }

    int num=s.top();
    s.pop();
     reverse(s,element);
     s.push(num);
}

void ReversestackRecursion(stack<int> &stack){
    if(stack.empty()){
      return;
    }

    int num=stack.top();
    stack.pop();

    ReversestackRecursion(stack);
    reverse(stack,num);
}

int main(){
    stack<int> s;

    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    ReversestackRecursion(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

   
}