#include <float.h>
#include <stdio.h>



void print(int a) {

   a = 250;

   printf("value print in print function %d \n", a);

}



int main() {

   int a = 20;

   printf(" before call print function %d \n", a); // 20

   print(a);  //  hexadecimal 

   printf(" after call print function %d \n", a);  // 20



}