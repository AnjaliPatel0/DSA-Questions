#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l;

    // copy list 
    list<int> n(5,10);
    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(2);
    l.push_front(1);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"After erase"<<endl;
    l.pop_back();
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list "<<l.size()<<endl;
}