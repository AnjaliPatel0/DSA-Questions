#include<iostream>
//#include "class.cpp"
using namespace std;

class hero{
//properties

    private:
    int health;

    public: 
    char level;

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
    //static
    hero a;
    a.sethealth(26);
    a.setlevel('A');
    cout<<"level is: "<<a.level<<endl;
    cout<<"health is "<<a.gethealth()<<endl;

    //Dynamic

    hero *b=new hero;
    b->sethealth(24);
    b->setlevel('b');
    cout<<"level is: "<<(*b).level<<endl;
    cout<<"health is "<<(*b).gethealth()<<endl;


    cout<<"level is: "<<b->level<<endl;
    cout<<"health is "<<b->gethealth()<<endl;

    // hero Prakhar;
    // cout<<"Prakhar health is: "<<Prakhar.gethealth()<<endl;
    // Prakhar.sethealth(26);
    // Prakhar.level='B';
    // cout<<"Prakhar health is: "<<Prakhar.gethealth()<<endl;
    // cout<<"level is: "<<Prakhar.level<<endl;
}