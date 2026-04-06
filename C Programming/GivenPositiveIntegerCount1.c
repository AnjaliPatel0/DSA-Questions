#include<stdio.h>
unsigned int countSetbits(unsigned int n){
    unsigned int count =0;
    while(n){
        count=count+(n&1);
        n=n/2;  //n=n>>1
    }
    return count;
}
int main(){
   int i;
   scanf("%d",&i);
   printf("Countset of bits is %d ",countSetbits(i));
}