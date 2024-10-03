
#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5};

int size = sizeof(arr)  / sizeof(arr[0]);

void demoSize(int arr[]) {

   int size = sizeof(arr)  / sizeof(arr[0]);

}


int main() {

   // int arr[] =  {1, 2, 3, 4, 5};

   double arr[] =  {1, 2, 3, 4, 5};


   int size = sizeof(arr)  / sizeof(arr[0]);

   printf("%d", size);

 

}