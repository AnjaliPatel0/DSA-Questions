/*Maximum Area Rectangle of 1s in a Binary Matrix
Last Updated : 15 Sep, 2025
Given a 2D binary matrix mat[][] consisting only of 0s and 1s, find the area of the largest 
rectangle sub-matrix that contains only 1s.

Examples: 

Input: mat[][] = [[0, 1, 1, 0],
                             [1, 1, 1, 1],
                             [1, 1, 1, 1],
                            [1, 1, 0, 0]]
Output: 8
Explanation: The largest rectangle with only 1's is from (1, 0) to (2, 3) which is

*/




#include<iostream>
 #include<stack>
 #include<vector>
 #include<climits>
 using namespace std;

 class solution{
    private:

    vector<int> nextSmallerElement(vector<int>& arr,int n){
        stack<int> s;

        s.push(-1);
        vector<int>  ans(n);

        for(int i=n-1;i>=0;i--){
            int curr= arr[i];
            while(s.top()!= -1 && arr[s.top()]>= curr){
                s.pop();
            }

            //ans is stack ka top
            ans[i]=s.top();
            s.push(i);
        }
       return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr,int n){
        stack<int> s;
        s.push(-1);
        vector<int>  ans(n);

        for(int i=0;i<n;i++){
            int curr= arr[i];
            while(s.top()!= -1 && arr[s.top()]>= curr){
                s.pop();
            }

            //ans is stack ka top
            ans[i]=s.top();
            s.push(i);
        }
       return ans;
    }


    int largestRectangle(vector<int>&  heights,int n){
        // int n= heights.size();
        vector<int> next(n);
        next=nextSmallerElement(heights,n);

        vector<int> prev(n);
        prev=prevSmallerElement(heights,n);

        int area=INT_MIN;
        for(int i=0;i<n;i++){
            int l=heights[i];
            

            if(next[i]==-1)
               next[i]=n;
            int b=next[i]-prev[i]-1;
            int newArea =l*b;
            area= max(area,newArea);   
        }
           return area;
    }
public:
   int maxArea(vector<vector<int>>& M,int n,int m){
     // compute area for first row
    int area=largestRectangle(M[0],m);

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){

            //row update: by adding previous rpw's vlaue
            if(M[i][j]!=0){
                M[i][j]=M[i][j]+M[i-1][j];

            }else{
                M[i][j]=0;
            }

            //entire row is updated now
            area= max(area,largestRectangle(M[i],m));
        }
      
    }
      return area;
   } 
 };
 int main(){
      int n=4, m=4;

    vector<vector<int>> matrix = {
        {0,1,1,0},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,0,0}
    };

    solution obj;
    cout << "Max Area: " << obj.maxArea(matrix,n,m);

    return 0;
}