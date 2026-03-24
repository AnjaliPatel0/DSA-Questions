#include<iostream>
#include<stack>
using namespace std;
class TwoStack{
    
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    
    TwoStack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }

    void push1(int num){
       if(top2-top1>1){
        top1++;
        arr[top1]=num;
       }
    }

    void push2(int num){
       if(top2-top1>1){
        top2--;
        arr[top2]=num;
       }
    }
    int pop1(){
      if(top1>=0){
        int ans= arr[top1];
        top1--;
        return ans;
      }else{
        return -1;
      }
    }
    int pop2(){
      if(top2<size){
        int ans= arr[top2];
        top2++;
        return ans;
      }else{
        return -1;
      }
    }

    void printStack1(){
    cout << "Stack 1: ";
    for(int i = 0; i <= top1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printStack2(){
    cout << "Stack 2: ";
    for(int i = size-1; i >= top2; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}
};
int  main(){
   TwoStack st(5);

   st.push1(22);
   st.push1(30);
   st.push1(10);
   st.push2(40);
   st.push2(60);
 
   st.printStack1();
   st.pop1();
   st.printStack1();
   st.printStack2();

}