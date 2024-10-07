#include<stdio.h>
#include <string.h>

struct Hotel {

   char hotelName[20];
   int rooms;
   char owner[30];
   char place[100];

};

int main() {

   struct  Hotel  Arohi;


   strcpy(Arohi.hotelName, "Arohi Hotel");

   strcpy(Arohi.place, "shivajinagar pune");


   printf("hotelname = %s\n", Arohi.hotelName);

}