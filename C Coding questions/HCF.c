#include <stdio.h>
int main()
 {
  //for initialize variables
   int a, b, i, hcf;
   a = 12;
   b = 16;
//find hcf of number
for(i = 1; i <= a || i <= b; i++)
 {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }
 //display hcf
   printf("HCF = %d", hcf);
   return 0;
}
