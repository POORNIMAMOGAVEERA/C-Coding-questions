#include<stdio.h>
#include<ctype.h>
int main(){
  int n;
  printf("enter the Number");
  scanf("%d",&n);
  if(isdigit(n)){
  printf("Please enter Number");
  }
  else if(n%2 == 0){
  printf("Even no");
  }
  else{
  printf("Odd no");
  }
  return 0;
}
