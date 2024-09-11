#include <stdio.h>



void prime(int n) {


   for(int i=n-1; i>=1; i--) {

      // check the number is 1 print prime number

      if(i==1) {
         printf("\nPrime Number\n");
         break;
      }


      // check number is divisible or not

      if(n % i == 0 && i != 1) {

         printf("\nComposite Number\n");
         break;
      }

   }


}




void main() {


   // prime(15); //  composite 

   prime(9973);  // prime number



}