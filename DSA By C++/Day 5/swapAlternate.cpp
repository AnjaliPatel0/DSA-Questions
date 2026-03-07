#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        int temp;
        if(i+1<size){
            // swap(arr[i],arr[i+1]);
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
}
int main(){
    int even[8]={4,5,6,7,2,7,1,9};
    int odd[5]={4,5,6,7,2};
    swapAlternate(even,8);
    printArray(even,8);

    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);

}