
#include<stdio.h>

void main() {

   int a = 25;

   int binary = 0;

   while(a > 0) {

      int remind = a % 2;

      a = a / 2;

      binary = binary * 10 + remind;

   }


   int inverse = 0;

   while(binary > 0) {
      int unit = binary % 10;

      binary = binary / 10;

      inverse = inverse * 10;

      inverse = inverse + unit;
   }


   printf("binary = %d\n", inverse);

   


}