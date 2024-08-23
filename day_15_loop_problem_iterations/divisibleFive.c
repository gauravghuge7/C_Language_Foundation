
#include<stdio.h>

void main() {

   int a = 50;
   int b = 100;

   // check number is greater than or not
   if(a < b) {

      for(int i=b; i>=1; i--) {

         if(a%i==0 && b% i == 0) {

            printf("%d ", i);
         }

      }

   } 
   else {

      for(int i=a; i>=1; i--) {

         if(a%i==0 && b% i == 0) {

            printf("%d ", i);
         }

      }

   }

}