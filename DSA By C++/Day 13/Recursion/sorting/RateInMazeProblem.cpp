/*Consider a rat placed at position (0, 0) in an n x n square matrix maze[][].
The rat's goal is to reach the destination at position (n-1, n-1).
The rat can move in four possible directions: 'U'(up), 'D'(down), 'L' (left), 'R' (right).

The matrix contains only two possible values:

0: A blocked cell through which the rat cannot travel.
1: A free cell that the rat can pass through.
Your task is to find all possible paths the rat can take to reach the destination, 
starting from (0, 0) and ending at (n-1, n-1), under the condition that the rat cannot revisit any cell along 
the same path. Furthermore, the rat can only move to adjacent cells that are within the bounds of the matrix
and not blocked.
If no path exists, return an empty list.

Note: Return the final result vector in lexicographically smallest order.

Examples:

Input: maze[][] = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]
Output: ["DDRDRR", "DRDDRR"]
Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, 
when printed in sorted order we get DDRDRR DRDDRR.*/




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isSafe(int x,int y,int n,vector<vector<int>>& visited,vector<vector<int>>& m){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
        return true;
    }
    return false;
}

void solve(vector<vector<int>>& m, int n, vector<string>& ans,
           int x, int y, vector<vector<int>>& visited, string path){

    // base case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // Down
    if(isSafe(x+1, y, n, visited, m)){
        path.push_back('D');
        solve(m, n, ans, x+1, y, visited, path);
        path.pop_back();
    }

    // Left
    if(isSafe(x, y-1, n, visited, m)){
        path.push_back('L');
        solve(m, n, ans, x, y-1, visited, path);
        path.pop_back();
    }

    // Right
    if(isSafe(x, y+1, n, visited, m)){
        path.push_back('R');
        solve(m, n, ans, x, y+1, visited, path);
        path.pop_back();
    }

    // Up
    if(isSafe(x-1, y, n, visited, m)){
        path.push_back('U');
        solve(m, n, ans, x-1, y, visited, path);
        path.pop_back();
    }

    // backtrack
    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>>& m,int n){
    vector<string> ans;

    if(m[0][0] == 0) return ans;

    vector<vector<int>> visited(n, vector<int>(n, 0));

    solve(m, n, ans, 0, 0, visited, "");

    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<vector<int>> maze = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    vector<string> result = findPath(maze, 4);

    // print output
    cout << "[";
    for(int i = 0; i < result.size(); i++){
        cout << "\"" << result[i] << "\"";
        if(i < result.size() - 1) cout << ", ";
    }
    cout << "]";

    return 0;
}