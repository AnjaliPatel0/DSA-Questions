#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    
    q.push("Anjali");
    q.push("Anu");
    q.push("Akhu");

    cout<<"Size before pop  "<<q.size()<<endl;
    cout<<"first elements "<<q.front()<<endl;

    q.pop();
    cout<<"first elements "<<q.front()<<endl;

    cout<<"Size After pop  "<<q.size()<<endl;
}