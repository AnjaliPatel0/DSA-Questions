#include<iostream>
#include<stack>
using namespace std;
int main(){
  
    stack<string> s;

    s.push("Anjali");
    s.push("Aku");
    s.push("Anu");

    cout<<"top string "<<s.top()<<endl;

    s.pop();
    cout<<"top string "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

}