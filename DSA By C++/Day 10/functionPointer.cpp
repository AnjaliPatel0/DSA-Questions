#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;;
}
void update(int *p){
    // p=p+1;
    *p=*p+1;
    
    //cout<<"inside "<<p<<endl;
}
int getSum(int arr[],int n){
    // there is no difference btw arr[]or *arr 
    // it read arr as a pointer
    cout<<endl<<"size "<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
   /* int value=5;
    int *p=&value;
    print(p);
    // cout<<"before "<<p<<endl;
    // update(p);
    // cout<<"after "<<p<<endl;
    cout<<"before "<<*p<<endl;
    update(p);
    cout<<"after "<<*p<<endl; */

    int arr[6]={1,2,3,4,5,6};
   
    cout<<"sum is "<<getSum(arr,6)<<endl;
}