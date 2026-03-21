#include<iostream>
using namespace std;
class student{
    private:
    int name;
    int age;
    int height;

    public:
    int getAge(){
     return this->age;
 }
};
int main(){
     student first;
     cout<<"All is well "<<endl;
}