
#include <stdio.h> 


int findInArray(int arr[], int size, int target) {
   
   for(int i=0; i<size; i++) {


      if(arr[i] == target) {
         
         printf("True");
         return i;
      }
   }

   printf("False");
   
   return -1;
}

int main() {
   int arr[6];

   arr[0] = 20;
   arr[1] = 30;
   arr[2] = 22;
   arr[3] = 40;
   arr[4] = 70;
   arr[5] = 200;

   // int arr[] = {20, 30, 22, 40, 70, 200};

   int target = 200;

   int size = sizeof(arr) / sizeof(arr[0]);

   findInArray(arr, size, target);

}