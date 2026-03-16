#include<iostream>
using namespace std;
int update(int **p2){
    //p=p+1;
    // change hoga = No

    //nn*p2=*p2+1;
    //change hoga = yes 

    **p2=**p2+1;
    //change hoga = yes 
}
int main(){
   /* int i=6;
    int* p=&i;
    int** p2=&p;

    cout<<endl<< "Sab sahi chal raha hai "<<endl;
    cout<<"printing p "<<p<<endl;
    //cout<<"address of p "<<&p<<endl;

    cout<<*p2<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;*/

    int i=6;
    int* p=&i;
    int** p2=&p;

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"After "<<i<<endl;
    cout<<"After "<<p<<endl;
    cout<<"After "<<p2<<endl;
}