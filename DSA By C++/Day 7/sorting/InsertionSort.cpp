// Insertion sort is a simple sorting algorithm that works by iteratively inserting
// each element of an unsorted list into its correct position in a sorted portion of
// the list. It is like sorting playing cards in your hands. You split the cards into two groups:
// the sorted cards and the unsorted cards. Then, you pick a card from the unsorted group and 
// put it in the right place in the sorted group.

// Start with the second element as the first element is assumed to be sorted.
// Compare the second element with the first if the second is smaller then swap them.
// Move to the third element, compare it with the first two, and put it in its correct position
// Repeat until the entire array is sorted.


#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,8,2,1,23};
    int n=5;

    
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
              //shift
              arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    cout<<"sorted Insertin sort ";

    // for printing the array
    for(int j =0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}