/*Given a string s, the task is to return all permutations of a
 given string in lexicographically sorted order.

Note: A permutation is the rearrangement of all the elements of a string.
 Duplicate arrangement can exist.

Examples:


Input:  s = "ABC"
Output: "ABC", "ACB", "BAC", "BCA", "CAB", "CBA"

Input: s = "XY"
Output: "XY", "YX"

Input: s = "AAA"
Output: "AAA", "AAA", "AAA", "AAA", "AAA", "AAA" */


#include<iostream>
#include<vector>
using namespace std;
// Permutations of a string 

void solve(vector<int> nums, vector<vector<int>>& ans,int index){
    //base case
    if(index >= nums.size()){
        ans.push_back(nums);
        return ;
    }

    for(int j=index;j < nums.size();j++){
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);

        //backtrack
        swap(nums[index],nums[j]);
    }
}


    vector<vector<int>> permute( vector<int>& nums) {
         vector<vector<int>> ans ;
         int index=0;
         solve(nums,ans,index);
         return ans;
    }
int main(){
      int arr[3] = {1,2,3};

    // convert array to vector
    vector<int> nums(arr, arr + 3);
    vector<vector<int>> result = permute(nums);


    // print in required format
    cout << "[";
    for(int i = 0; i < result.size(); i++) {
        cout << "[";
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if(j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if(i < result.size() - 1) cout << ",";
    }
    cout << "]";

}