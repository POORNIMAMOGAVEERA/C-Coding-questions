#include<stdio.h>
#include<math.h>
int main()
{
     //Initialization of variables where rev='reverse=0'
      int number, rev = 0, n1,left;

     //input a numbers for user
     printf("Enter the number\n");
     scanf("%d", &number);
       n1 = number;
      //use this loop for check true condition
      while (number > 0)
      {
           //left is for remider are left
            left= number%10;

            //for reverse of no.
             rev +=  pow(left,3);

             //number /= 10;
              number=number/10;
       }
        //To check reverse no
        if(n1 == rev){
            printf("Number %d is Armstrong Number",rev);
        }
        else{
            printf("Number is not a armstrong number");
        }
        return 0;
}
