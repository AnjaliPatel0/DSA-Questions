#include<iostream>
using namespace std;
class Human{
   public:
   int height;
   int weight;
   int age;

   public:
   int getAge(){
    return this->age;
   }
   void setweigth(int w){
    this->weight=w;
   }
};
class Male :private Human{
    public:
     string color;

    void sleep(){
        cout<<"Male is sleeping "<<endl;
    }

    int getheight(){
        return this->height;
    }
  };
// class Male :protected Human{
//     public:
//      string color;

//     void sleep(){
//         cout<<"Male is sleeping "<<endl;
//     }

//     int getheight(){
//         return this->height;
//     }
//   };
//   class Male :public Human{
//     public:
//      string color;

//     void sleep(){
//         cout<<"Male is sleeping "<<endl;
//     }
//   };
int main(){

    Male M;

    cout<<M.getheight()<<endl;
    
   /* Male object;
    cout<<object.age<<endl;
    cout<<object.weight<<endl;
    cout<<object.height<<endl;

    cout<<object.color<<endl;

    object.setweigth(45);
    cout<<object.weight<<endl;
    object.sleep(); */
}