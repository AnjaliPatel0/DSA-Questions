#include<iostream>
#include<deque>
using namespace std;
int main(){
    // size means how many elemnts
    deque<int> d;

    d.push_front(1);
    d.push_back(2);

    cout<<"before pop"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // cout<<"After pop"<<endl;
    // d.pop_back();
    //  for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<"print first Index Element -> "<<d.at(1)<<endl;
    
    cout<<"front element ->"<<d.front()<<endl;
    cout<<"back element -> "<<d.back()<<endl;
    cout<<" empty or not -> "<<d.empty()<<endl;

    cout<<"befor erase  ->"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase ->"<<d.size()<<endl;

}
