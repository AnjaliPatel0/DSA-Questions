#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack,int count ,int size){
     if(count==size/2){
        inputStack.pop();
        return;
     }

     int num = inputStack.top();
     inputStack.pop();

     solve(inputStack,count+1,size);

     inputStack.push(num);
}
void deleteMiddleElement(stack<int>&inputStack,int n){
    int count=0;
    solve(inputStack,count,n);
  }

  int main() {
    stack<int> s;

    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int n = s.size();

    deleteMiddleElement(s, n);

    // Print updated stack
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}