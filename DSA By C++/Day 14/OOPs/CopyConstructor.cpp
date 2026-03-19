#include<iostream>

using namespace std;

class hero{
//properties

    private:
    int health;

    public: 
    char level;

    hero(){
        cout<<"Constuctor called "<<endl;
    }

    //Parameterised constructor
    hero(int health){
        //cout<<"this is: "<<this<<endl;
        this->health=health;
    }
    hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    //copy constructor
    hero(hero& temp){
        cout<<" Copy Constuctor called "<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<"Health is "<<this->health<<endl;
        cout<<"level is "<<this->level<<endl;
        //cout<<level<<endl;
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
};
int main(){

    hero prakhar(28,'c');
    prakhar.print();

    //Copy Constructor
    hero R(prakhar);
    R.print();
}