#include<stdio.h>
#include<ctype.h>
int main(){
  char c;
  printf("Enter the Character:");
  scanf("%c",&c);
  if(c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'i' || c == 'A' || c=='E' || c == 'I' || c == 'O' ||c =='U'){
        printf("Vowels");
  }
  else if(!isalpha(c)){
        printf("\n not a alphabet\n");
  }
  else{
    printf("Consonants");
  }
  return 0;
}
