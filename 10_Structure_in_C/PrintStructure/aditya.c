#include<stdio.h>
#include <string.h>

struct MoterCycle {

   char vehicalName[200];
   char company[300];
   char addition[300];
   char plate_Num[300];

};

int main() {

   struct  MoterCycle Rx100;


   strcpy(Rx100.vehicalName, "Rx100");

   strcpy(Rx100.company, "Asus");


   printf("MoterCycle = %s\n", Rx100.vehicalName);

}