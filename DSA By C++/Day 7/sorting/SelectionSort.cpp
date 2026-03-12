// Selection Sort is a comparison-based sorting algorithm. It sorts by repeatedly
// selecting the smallest (or largest) element from the unsorted portion and swapping 
//it with the first unsorted element.

// Find the smallest element and swap it with the first element.
// This way we get the smallest element at its correct position.
// Then find the smallest among remaining elements (or second smallest) and swap it with the second element.
// We keep doing this until we get all elements moved to correct position.

#include<iostream>
using namespace std;
int main(){
 
    int arr[5]={64,25,12,22,11};
    int n=5;

    for(int i=0;i<n-1;i++){
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }        
    }
    swap(arr[minIndex],arr[i]);

    cout << "After pass " << i+1 << ": ";
        for(int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
      
    

