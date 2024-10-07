#include<stdio.h>
#include <string.h>

struct motercycle {
   char company[100];
   char adition[100];
   int  num_plat[20];
};

int main() {

   struct  motercycle motorbike;


   strcpy(motorbike.company, "royal Enfield");

   strcpy(motorbike.adition, "huntr addition");


   printf("%s\n", motorbike.company) ;

}