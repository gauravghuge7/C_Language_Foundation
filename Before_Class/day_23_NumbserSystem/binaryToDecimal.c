
#include <stdio.h>

int main() {

   int a = 101010;
   // printf("Enter One Number");
   // scanf("%d", &a);
   int pow = 1;

   int decimal = 0;

   while(a > 0) {

      int unit = a % 10;

      decimal += unit * pow;

      a = a / 10;

      pow = pow * 2;

   }

   printf("%d", decimal);

}