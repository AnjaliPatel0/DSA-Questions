#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<endl<<"Inside the function"<<endl;
// when update the array it also update in main function 
// because the address is access by update function
    //update the array
    arr[0]=130;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Going back to main function"<<endl;
}
int main(){
   int arr[3]={1,2,3};
   update(arr,3);
   
   cout<<endl<<"Printing in main function"<<endl;
   for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}