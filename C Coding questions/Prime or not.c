#include<stdio.h>
int main(){
  int a , count=0;
   printf("Enter the numbers:\n");
   scanf("%d",&a);
   for(int i=1;i<=a;i++){
       if(a % i == 0){
           count++;
       }
   }
   if(count == 2){
       printf("%d Is Prime Number",a);
   }
   else{
       printf("%d is not a prime number",a);
   }
  return 0;
}
