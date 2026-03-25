/*A celebrity is a person who is known to all but does not know anyone at a party.
 A party is being organized by some people. A square matrix mat[][] of size n*n 
 is used to represent people at the party such that if an element of row i and column j is set to 1 
 it means ith person knows jth person. You need to return the index of the celebrity in the party,
  if the celebrity does not exist, return -1.

Note: Follow 0-based indexing.

Examples:

Input: mat[][] = [[1, 1, 0],
                [0, 1, 0],
                [0, 1, 1]]
Output: 1
Explanation: 0th and 2nd person both know 1st person and 1st person does not know anyone. 
Therefore, 1 is the celebrity person.*/



#include<iostream>
#include<stack>
#include<vector>
using namespace std;


bool knows(vector<vector<int>>& M,int a ,int b,int n){
    if(M[a][b]==1){
        return true;
    }else{
        return false;
    }
}
int celebrityProblem(vector<vector<int>>& M,int n){
    stack<int> s;

    //step 1: push all element in stack
    for(int i=0;i<n;i++){
        s.push(i);
    }

    //step 2: get 2 element and campare them
    while(s.size()>1){
        int a= s.top();
        s.pop();
        int b=s.top();
        s.pop();

        if(knows(M,a,b,n)){
            s.push(b);
        }else{
            s.push(a);
        }
    }

    int ans=s.top();
    //step3 single element in satck is potential celebtity
    //so verify

   // bool rowCheck =false;
    int zeroCount=0;

    for(int i=0;i<n;i++){
        if(M[ans][i]==0){
            // rowCheck=true;
            zeroCount++;
        }
    }
     //all zeros
     if(zeroCount!=n){
       return -1;
     }
    //column check
   // bool colCheck =false;
    int oneCount=0;

    for(int i=0;i<n;i++){
        if(M[i][ans]==1){
           // colCheck=true;
           oneCount++;
        }
    }
     if(oneCount!= n-1){
        return -1;
     }
    return ans;
}

int main(){
    int n=3;
     vector<vector<int>> M = {
        {0,1,0},
        {0,0,0}, 
        {0,1,0}
    };

    int result = celebrityProblem(M,n);

    if(result == -1){
        cout << "No Celebrity" << endl;
    } else {
        cout << "Celebrity is: " << result << endl;
    }               
}
