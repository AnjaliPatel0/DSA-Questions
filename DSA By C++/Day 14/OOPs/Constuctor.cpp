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

    void print(){
        cout<<level<<endl;
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
    
    // object created statically 
    //cout<<"hiiiiii "<<endl;

    hero prakhar(26);
    prakhar.print();
    //cout<<"Address of Prakhar "<<&prakhar<<endl;
   // prakhar.gethealth();
   // cout<<"bye "<<endl;

    //dynamic 
    hero *h= new hero(11);
    h->print();

    hero temp(22,'p');
    temp.print();

}