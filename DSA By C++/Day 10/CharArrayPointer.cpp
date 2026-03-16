#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]= "abced";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c=&ch[0];
    //print entire value
    cout<<c<<endl;

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;
}