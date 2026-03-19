#include<iostream>
#include<cstring>
using namespace std;

class hero{
//properties

    private:
    int health;

    public: 
    char level;
    char *name;

    hero(){
        cout<<"Constuctor called "<<endl;
        name=new char[100];
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
        char *ch =new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<" Copy Constuctor called "<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){

        cout<<endl;
        cout<<"[ Name:  "<<this->name<<", ";
        cout<<"Health: "<<this->health<<", ";
        cout<<"level: "<<this->level<<" ]";
        cout<<endl<<endl;
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
     void setName(char name[]){
        strcpy(this->name,name);
    }
};
int main(){
    hero h1;
    h1.sethealth(20);
    h1.setlevel('M');
    char name[7]="Anjali";
    h1.setName(name);
    h1.print();

 //use default copy constructor
    hero h2(h1);
    h2.print();

    h1.name[0]='B';
    h1.print();

    h2.print();
}