#include<stdio.h>
#define pi 3.14

float AreaofCircle(int daimeter){
    float Radius=daimeter/2.0;
    float  Area= pi*Radius*Radius;

  return Area;
}
int main(){
    int daimeter;
    printf("Enter a number \n");
    scanf("%d",&daimeter);

   float result= AreaofCircle(daimeter);
   printf("Area of circle is %f",result);
   return 0;
}