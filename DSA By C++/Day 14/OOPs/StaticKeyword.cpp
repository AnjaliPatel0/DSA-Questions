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
    //static keyword
    static int timetoComplete;

    static int random(){
        return timetoComplete;
    }
    
    
};
int hero::timetoComplete=5;
int main(){
  cout<< hero::timetoComplete<<endl;

//   hero a;
//   cout<<a.timetoComplete<<endl;

}