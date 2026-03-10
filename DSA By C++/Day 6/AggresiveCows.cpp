// you are given an array with unique elements of stalls[],
// which denote the positions of stalls. You are also given an integer 
// k which denotes the number of aggressive cows. The task is to assign 
// stalls to k cows such that the minimum distance between any two of them
//  is the maximum possible.

// Examples:

// Input: stalls[] = [1, 2, 4, 8, 9], k = 3
// Output: 3
// Explanation: The first cow can be placed at stalls[0], 
// the second cow can be placed at stalls[2] and 
// the third cow can be placed at stalls[3]. 
// The minimum distance between cows in this case is 3, which 
//is the largest among all possible ways.



#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int stalls[],int n,int k,int mid){
    int cowCount =1;
    int lastPos=stalls[0];
    for(int i=0;i<n;i++){
        if(stalls[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos=stalls[i];
        }
    }
    return false;
}

int AggresiveCows(int stalls[],int n,int k){
    sort(stalls, stalls+n);
   
    int s=0;
    int maxi =-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,stalls[i]);
    }
    int e= maxi;
    int ans=-1;
    int mid=(s+e)/2;

    while(s<=e){
        if(isPossible(stalls,n,k,mid)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
int n=5;
int stalls[5]={4,2,1,3,6};
int k=2;

cout<<"the Lagest maximum distance is "<< AggresiveCows(stalls,n,k)<<endl;
}