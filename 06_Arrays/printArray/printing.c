#include  <stdio.h>


void printArray(int arr[], int size) {

   //  array size 5
   for(int i=0; i<size; i++) {
      printf("%d ", arr[i]);
   }
}

void traverseArray(int arr[], int size) {

   for(int i=0; i<size; i++) {
      printf("%d ", arr[i]);
   }
}


int main() {
   int arr[5];
   arr[0] = 15;
   arr[1] = 25;
   arr[2] = 35;
   arr[3] = 45;
   arr[4] = 55;

   int size = sizeof(arr) / sizeof(arr[0]);

   // printArray(arr, size);

   traverseArray(arr, size);


}