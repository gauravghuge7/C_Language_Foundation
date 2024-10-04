
#include <stdio.h>


int main() {

   int number = 10;

   int *memoryLocation = &number;

   printf("Value of number: %p\n", *memoryLocation);
}