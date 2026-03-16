#include<iostream>
using namespace std;
int main(){
  /*  int n;
    cin>>n;
   int** arr= new int*[n];
  // creation of a 2d array
   for(int i=0;i<n;i++){
      arr[i]=new int[n];
   } 

   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
   }
   cout<<endl;

   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
      }cout<<endl;
   }
      */
   
    int row;
    cin>>row;

    int col;
    cin>>col;
   int** arr= new int*[row];
  // creation of a 2d array
   for(int i=0;i<row;i++){
      arr[i]=new int[col];
   } 

   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cin>>arr[i][j];
      }
   }
   cout<<endl;

   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
      }cout<<endl;
   }
    //relesing memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }  
    delete []arr;

}