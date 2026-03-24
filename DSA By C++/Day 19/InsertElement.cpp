#include<iostream>
#include<stack>
using namespace std;

// insert an element at its bottom in a givenn stack
void solve(stack<int>& s,int x){
      if(s.empty()){
        s.push(x);
        return;
      }

      int num= s.top();
      s.pop();

      solve(s,x);

      s.push(num);
}
stack<int> insertElementatBottom(stack<int>& mystack,int x){
        solve(mystack,x);
        return mystack;
}

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    int x = 99;

    insertElementatBottom(s, x);

    // Print stack
    cout << "Stack after inserting at bottom:\n";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}