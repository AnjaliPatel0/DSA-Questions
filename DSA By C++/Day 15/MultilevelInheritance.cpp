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

class GermanShepherd: public Dog{

};
int main(){
  GermanShepherd g;
  g.speak();
}