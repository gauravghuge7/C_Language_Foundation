#include <stdio.h>


int main() {

   int arr[5];

   arr[0] = 34;
   arr[1] = 56;
   arr[2] = 78;
   arr[3] = 90;
   arr[4] = 120;

   int *ptr = arr;

   printf("%d\n", *(ptr + 1));   // print 56
   printf("%d\n", *(ptr + 2));   // 78
   printf("%d\n", *(ptr + 3));   // 90
   printf("%d\n", *(ptr + 4));   // 90
   printf("%d\n", *(ptr + 5));   // 90


}