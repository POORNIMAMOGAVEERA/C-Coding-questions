#include<stdio.h>
int main(){
    long a;
  int s=0,d;
   printf("Enter the number:\n");
   scanf("%d",&a);
   while(a != 0){
       d = a%10;
       s += d;
       a /= 10;
   }
      printf("Sum : %d ",s);
  return 0;
}
