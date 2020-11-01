#include<stdio.h>
int main()
{
     //Initialization of variables where rev='reverse=0'
      int number, rev = 0,store, n1,left;

     //input a numbers for user
     printf("Enter the number\n");
     scanf("%d", &number);

     //for duplicancy of number
      n1=number;

      store= number;
      //use this loop for check true condition
      while (number > 0)
      {
           //left is for reminder are left
            left= number%10;

            //for reverse of no.
             rev = rev * 10 + left;

             //number /= 10;
              number=number/10;
       }
        //To check reverse no is a Palindrome
        if(n1==rev)
            printf("Number %d is Palindrome number",n1);
        else
            printf("it is not a Palindrome number");
    return 0;
}
