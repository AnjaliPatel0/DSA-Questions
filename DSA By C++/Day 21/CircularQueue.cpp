#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{
   int* arr;
   int front;
   int rear;
   int size;
public:

CircularQueue(int n){
    size=n;
    arr= new int[size];
    front=-1;
    rear=-1;
}

bool enqueue(int value){
      if((front==-1 && rear==size-1)|| rear==(front-1)%(size-1)){
       // cout<<"Queue is Full ";
        return false;
      }else if(front==-1){
        front=rear=0;
        
      }else if(rear=size-1 && front !=0){
              rear=0;
              
      }else{
        rear++;
      
      }
      arr[rear]=value;
      return true;
}

int dequeue(){
if(front==-1){
   // cout<<"Queuee is empty "<<endl;
    return -1;
}
int ans=arr[front];
arr[front]=-1;
if(front==rear){ // first element is present
    front=rear=-1;
}else if(front==size-1){
      front=0;//to maintain cyclic nature
}else{
    front++;
}
return ans;
}
};
int main(){

}
