#include<iostream>
using namespace std;
// function Overloading
class A{
    public:
    void sayHello(){
        cout<<"Hello Anjali "<<endl;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }

};
// operator overloading
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output "<<value2-value1<<endl;
    }
};

//Runtime or overriding
class Animal{
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};  
class Dog: public Animal {
    public:
    void speak(){
        cout<<"Barking "<<endl;
    }
};      
int main(){


    Dog g;
    g.speak();
/*   B obj1,obj2;
   obj1.a=4;
   obj2.a=7;

   obj1+obj2;

   A obj;
   obj.A::sayHello();*/

}