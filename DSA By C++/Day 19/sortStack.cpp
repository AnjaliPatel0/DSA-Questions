#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s ,int num){
    if(s.empty() || (!s.empty()) && s.top()<num){
         s.push(num);
         return;
    }

    int n= s.top();
    s.pop();

    sortedInsert(s,num);

    s.push(n);
}
void sortstack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int num= s.top();
    s.pop();

    //recursive call
    sortstack(s);
    sortedInsert(s,num);
}

int main(){
     stack<int> s;

    s.push(4);
    s.push(23);
    s.push(20);
    s.push(14);

    sortstack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}