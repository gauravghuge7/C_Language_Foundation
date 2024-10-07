#include <stdio.h>
#include <string.h>   // import string library 

struct motorcycle {
    
   char bikename[20];
   int tire;      ///   array length must be have
   
   int gear;    // nothing need Array
   float petrol;     // nothing need Array
   int  maxSpeed;   // nothing need Array and change variable name   
   int cylinder;    // nothing need array 
   int numberplate[10];
};     /// semicolon must needed 

int main () {
    
  struct motorcycle Arohi;   // check spell mistake 

   strcpy(Arohi.bikename,"kawasaki zx10r");
   Arohi.tire = 5;
   Arohi.gear = 3;
   Arohi.petrol = 15.7;
   Arohi.maxSpeed = 300;
   Arohi.cylinder = 3;
   Arohi.numberplate[0] = 1;   // 1930
   Arohi.numberplate[1] = 9;   // 1930
   Arohi.numberplate[2] = 3;   // 1930
   Arohi.numberplate[3] = 0;   // 1930


  
  printf("bikeName = %s \n", Arohi.bikename);
  printf("tire = %d\n", Arohi.tire);
  printf("gear = %d\n", Arohi.gear);
  printf("petrol = %f\n", Arohi.petrol);
  printf("maxSpeed = %d\n", Arohi.maxSpeed);
  printf("Cyclinder = %d\n", Arohi.cylinder);

   
}