/*Given an array arr[] representing a histogram, where each element denotes the height of a bar
 and every bar has a uniform width of 1 unit, find the largest rectangular area that can be formed within 
 the histogram. The rectangle must be formed using contiguous bars.

Example: 

Input: arr[] = [60, 20, 50, 40, 10, 50, 60]
Output: 100
Explanation: We get the maximum area by picking bars highlighted above in green (50, and 60).
 The area is computed (smallest height) * (no. of the picked bars) = 50 * 2 = 100.*/




 #include<iostream>
 #include<stack>
 #include<vector>
 #include<climits>
 using namespace std;

 class solution{
    private:

    vector<int> nextSmallerElement(vector<int> &arr,int n){
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

    vector<int> prevSmallerElement(vector<int> &arr,int n){
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

public:
    int largestRectangle(vector<int> &heights){
        int n= heights.size();
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
    
 };
 int main(){
    solution obj;
    vector<int> heights = {2,1,5,6,2,3};

    cout << "Largest Rectangle Area: " 
         << obj.largestRectangle(heights) << endl;

    return 0;
}