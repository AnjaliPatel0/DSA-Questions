// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the 
// adjacent elements if they are in the wrong order. This algorithm is not efficient for 
// large data sets as its average and worst-case time complexity are quite high.

// Sorts the array using multiple passes. After the first pass, 
// the maximum goes to end (its correct position). Same way, after second pass, 
// the second largest goes to second last position and so on.
// In every pass, process only those that have already not moved to correct position.
//  After k passes, the largest k must have been moved to the last k positions.
// In a pass, we consider remaining elements and compare all adjacent and swap
//  if larger element is before a smaller element. If we keep doing this, 
// we get the largest (among the remaining elements) at its correct position.


#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
for (int i=0;i<n-1;i++){
        //for round 1 to n-1S     
       for(int j=0;j<n-i-1;j++){
           // process element till n-i th index 
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);          
        }
       }    
    }

    //OPTIMISED VERSION
    // for (int i=0;i<n-1;i++){
    //     //for round 1 to n-1S
         
    //     bool swaped= false;
    //     // process element till n-i th index
    //    for(int j=0;j<n-i-1;j++){
           
    //     if(arr[j]>arr[j+1]){
    //         swap(arr[j],arr[j+1]);
    //         swaped=true;
    //     }
    //    } 
    //    if(swaped==false){
    //     break;
    //    }
   // }
}
int main(){
    int arr[6]={65,34,23,12,13,20};
    int n=6;
   
   bubbleSort(arr,n);
    cout << "Sorted elements are: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}