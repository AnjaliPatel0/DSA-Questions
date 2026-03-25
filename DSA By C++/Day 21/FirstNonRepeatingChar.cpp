#include<iostream>
#include<queue>
#include<stack>
#include<unordered_map>
using namespace std;

string firstNonRepeatingChar(string A){
    unordered_map<char,int> count;
    queue<char> q;
    string ans="";
    for(int i=0;i<A.length();i++){
        char ch= A[i];

        count[ch]++;

        q.push(ch);

        while(!q.empty()){
            if(count[q.front()]>1){
                q.pop();
            }else{
                ans.push_back(q.front());
                break;
            }
            
        }
        if(q.empty())
        ans.push_back('#');
    }
    return ans;
}

int main(){
    
    string s="aabcd";
    string result = firstNonRepeatingChar(s);

    cout << "Result: " << result << endl;
    
    
}