#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int wight;

    public:
    void speak(){
        cout<<"Bhau Bhau "<<endl;
    }
};

class Dog :public Animal{
    
};
int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;
}