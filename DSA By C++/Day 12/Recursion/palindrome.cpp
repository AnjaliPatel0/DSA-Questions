#include<iostream>
using namespace std;
// check Palindrome

bool CheckPalindrome(string& str,int i,int j){
   
   
    
    if(i>j)
       return true;
    if(str[i]!=str[j]){
        return false;
    }else{
        return CheckPalindrome(str, i+1,j-1);
    }
    
   
    
}
int main(){
    string name={"abbccbba"};
    cout<<endl;
    bool isPalindrome=CheckPalindrome(name,0,name.length()-1);
   
    if(isPalindrome){
        cout<<"Its is a Palindrome "<<endl;
    }else{
         cout<<"Its is not a Palindrome "<<endl;
    }
}