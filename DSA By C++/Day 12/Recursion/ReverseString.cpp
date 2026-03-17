#include<iostream>
using namespace std;
// reverse the string

void reverseString(string& str,int i,int j){
   
    cout<<"call recieved for "<<str<<endl;
    
    if(i>j)
       return ;
    swap(str[i],str[j]);
    i++;
    j--;
    reverseString(str,i,j);   
}
int main(){
    string name={"anjali"};
    cout<<endl;
    reverseString(name,0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;
}