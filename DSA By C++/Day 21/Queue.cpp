#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue<int> q;
    q.push(10);
     cout<<"front of queue is: "<<q.front()<<endl;
    q.push(30);

    q.push(40);
     q.pop();
    cout<<"size of queue is: "<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }else{
        cout<<"queue is not empty "<<endl;
    }
}