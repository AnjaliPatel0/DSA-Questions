#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[5]={5,2,8,1,9};
    // int n=5;
    
    vector<int> v;

    v.push_back(5);
    v.push_back(2);
    v.push_back(8);
    v.push_back(1);
    v.push_back(9);

    int start=0;
    int end=v.size()-1;
    
        while(start<=end){
         swap(v[start],v[end]);
         start++;
         end--;
        }
    

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}