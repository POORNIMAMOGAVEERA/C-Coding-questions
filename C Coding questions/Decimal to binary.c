#include <stdio.h>
#include<math.h>
int main() {
    int decimal,bin,base=1,d,count=0,dec_num;
    printf("Enter decimal value: ");
    scanf("%d", &decimal);
    dec_num=decimal;
    while (decimal != 0) {
           d = decimal %2;
           bin = bin + d*base;
           if(d == 1){
               count++;
           }
           base = base*10;
      decimal /= 2;
    }
    printf("Input num is = %d\n", dec_num);
    printf("Its binary equivalent is = %ld\n", bin);
    printf("Num of 1's in the binary num is = %d\n", count);
    return 0;
}
