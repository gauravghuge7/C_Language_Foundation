
#include <stdio.h> 


void printArray(int numbers[]) {

   

}


int main() {

   // int numbers[4] = {10, 20, 30, 40};

   int numbers[10];

   
   numbers[0] = 10;
   numbers[1] = 20;
   numbers[2] = 30;
   numbers[3] = 40;

   int size  = sizeof(numbers) /  sizeof(numbers[0]);


   // printf("size of array %d\n", sizeof(numbers[0]));

   printf("size of array %d\n", size);

}