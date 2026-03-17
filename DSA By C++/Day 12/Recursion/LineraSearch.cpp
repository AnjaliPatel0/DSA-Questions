#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"Size of Array is "<<n<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
}
bool linearSearch(int *arr,int size,int key){
   print(arr,size);
   
    if(size==0)
    return false;
   if(arr[0]==key){
    return true;
   } else{
      int remainingPart = linearSearch(arr+1,size-1,key);
      return remainingPart;
   }
}
int main(){
  int arr[5]={2,3,5,6,1};
   int size=5;
   int key =8;

   bool ans= linearSearch(arr,size,key);

   if(ans){
     cout<<"Present "<<endl;
   }else{
    cout<<"Absent "<<endl;
   }
}