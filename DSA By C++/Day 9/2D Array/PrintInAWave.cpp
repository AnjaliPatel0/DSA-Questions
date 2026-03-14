#include<iostream>
#include<vector>
using namespace std;
/*  input ->
1 2 3
4 5 6
7 8 9

output -> 1 8 3 6 5 4 7 2 9 */

void Printwave(int arr[][3], int nrow, int mcol){
    for(int col = 0; col < mcol; col++){

        if(col & 1){
            // odd column -> bottom to top
            for(int row = nrow-1; row >= 0; row--){
                cout << arr[row][col] << " ";
            }
        }
        else{
            // even column -> top to bottom
            for(int row = 0; row < nrow; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main(){

    int arr[3][3];

    cout<<"Enter a 2D array"<<endl;

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    cout<<"Printing 2D array"<<endl;

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Wave Traversal: ";
    Printwave(arr,3,3);

}