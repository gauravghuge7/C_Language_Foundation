

/* 

question 1 --> create a function and receive a number h and print the factorial of h and also return the factorial 

factorial  h = 4

factorial of h =  1 * 2 * 3 * 4 = 24 is the factorial of 4

use loop from (1 to h)

question 2 --> create a function and receive two number a and b print the highest common factor 

use loop from bigger number to 0
use if else 



question 3 --> create a function recieve a number b and print the numbers from  b to 1










*/



/* 
question 1 --> create a function and receive a number h and print the factorial of h and also return the factorial 

factorial  h = 4

factorial of h =  1 * 2 * 3 * 4 = 24 is the factorial of 4

h = 10



use loop from (1 to h)


*/


#include <stdio.h>

int factorial(int h) {

   int fact = 1;

   for(int i=1; i<=h; i++) {

      fact = fact * i;
   //   1  =   1 * 1;
   //   2  =   1 * 2;
   //   6  =   2 * 3;
   //   24  =   6 * 4;


   }

   return fact;
}


/* 


question 2 --> create a function and receive two number a and b print the highest common factor 

use loop from bigger number to 0
use if else 



*/











void main() {

   int fact = factorial(5);

   printf("%d", fact);

}