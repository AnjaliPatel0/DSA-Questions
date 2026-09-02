#include<iostream>
using namespace std;



void reverse(int arr[],int n){
   int start = 0;
   int end = n-1;
    while(start<=end){
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
}

bool searchkey(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
}

int MaxArray(int arr[],int n){
    int max = INT16_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void printarray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]= {2,3,12,-1,0};

    reverse(arr,5);
    printarray(arr,5);

   bool found = searchkey(arr,5,3);

   if(found){
    cout<<"key is present"<<endl;
   }else{
    cout<<"key is absent";
   }

  cout<<"Maximum of array "<< MaxArray(arr,5);
}