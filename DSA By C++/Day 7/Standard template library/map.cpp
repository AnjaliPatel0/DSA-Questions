#include<iostream>
#include<map>
using namespace std;
int main(){
 map<int,string> m;

 m[1]="Anjali";
 m[13]="Prakhar";
 m[10]="Panday";

 m.insert({4,"Patel"});

 cout<<"before erase "<<endl;
 for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
 }
 cout<<"finding 4 -> "<<m.count(4)<<endl;

 m.erase(4);
 cout<<"After erase "<<endl;
 for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
 }

 auto it =m.find(10);
 for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
 }
}