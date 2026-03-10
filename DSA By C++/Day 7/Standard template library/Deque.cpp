#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d;

    d.push_front(1);
    d.push_back(2);

    for(int i:d){
        cout<<i<<" ";
    }
    
}