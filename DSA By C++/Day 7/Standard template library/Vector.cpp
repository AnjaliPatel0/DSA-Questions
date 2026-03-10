// vector is dynamic store in continuous 
// if one vector is full the next element wants to insert
// the new vector is created of double size of previous
// the previous vector element copy in new vector and dumb the previous vector


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    vector<int> a(5,1);

    vector<int> last(a);

    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    //capacity is a memory use
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;
   
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"After pop"<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"before clear size -> "<<v.size()<<endl;

    v.clear();
    cout<<"After clear size -> "<<v.size()<<endl;
}