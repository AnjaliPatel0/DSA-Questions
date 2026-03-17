/*You have been given a number of stairs. Initially, you are at the 0th stair, 
and you need to reach the Nth stair.
Each time, you can climb either one step or two steps.
You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.

Note:

Note: Since the number of ways can be very large, return the answer modulo 1000000007.
Example :
N=3*/


// count destination way to climb staris
#include<iostream>
using namespace std;
int countDisticWaytoCLimbStairs(long long nStairs){
    if(nStairs<0)
      return 0;
    if(nStairs==0)
       return 1;
       
    int ans= countDisticWaytoCLimbStairs(nStairs-1)
             +countDisticWaytoCLimbStairs(nStairs-2) ;  
       return ans;     
            }
int main(){
  int nStairs;
  cout<<"enter a number "<<endl;
  cin>>nStairs;;

    int answer= countDisticWaytoCLimbStairs(nStairs);
    cout<<"Answer is "<<answer<<endl;
}