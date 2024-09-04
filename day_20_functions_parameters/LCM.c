#include<stdio.h>


void main() {

   int a = 10;
   int b = 15;

   for(int i=a; i<= a*b; i++) {

      if(i%a == 0 && i % b == 0) {

         printf("%d", i);
         break;
      }
   }

}