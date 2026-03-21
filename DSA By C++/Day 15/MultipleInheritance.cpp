#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int wight;

    public:
    void bark(){
        cout<<"Bhau Bhau "<<endl;
    }
};
class Human{
    public:
    string color;

    void speak(){
        cout<<"Humann is speaking "<<endl;
    }
};
class Hybrid: public Animal,public Human{

};


int main(){
  Hybrid H;
  H.speak();
  H.bark();
}