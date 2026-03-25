#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> revFirstKelements(queue<int> q,int k){
      stack<int>  s;
      for(int i=0;i<k;i++){
        int element=q.front();
        q.pop();
        s.push(element);
      }
      while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
      }
     // step3 fetch first (n-k) element from q and push back
      int t=q.size()-k;
      while(t--){
        int element=q.front();
        q.pop();
        q.push(element);
      }
      return q;
}

int main(){
    queue<int> q;
    int k=2;
    q.push(3);
    q.push(9);
    q.push(4);
    q.push(8);

    q=revFirstKelements(q,k);
    while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop();
    }
}