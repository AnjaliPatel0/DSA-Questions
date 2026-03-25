#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> rev(queue<int> q){
      stack<int>  s;
      while(!q.empty()){
        int element=q.front();
        q.pop();
        s.push(element);
      }
      while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
      }
      return q;
}

int main(){
    queue<int> q;
    q.push(3);
    q.push(9);
    q.push(4);
    q.push(8);

    q=rev(q);
    while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop();
    }
}