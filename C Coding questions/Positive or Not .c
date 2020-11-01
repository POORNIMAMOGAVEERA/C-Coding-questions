#include<stdio.h>
int main(){
 printf("Enter the number:");
 scanf("%d",&n);
 if(n > 0){
 printf("Positive Number");
 }
 else if( n == 0){
   printf("You entered Zero");
 }
 else{
 printf("Negative number");
 }
 return 0;
}
