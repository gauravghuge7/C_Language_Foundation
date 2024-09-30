

#include <stdio.h> 


int greenTea = 15;   // tell what is the scope of variable 


int add() {

   int  blackTea =  20; 

   
   for(int i = 0; i < 10; i++) {
      printf("%d\n", i);
   }

   

   printf("add function : %d\n", greenTea);

}
   

int main() {

   int tea = 10;

   add();
   printf("main function : %d\n", greenTea);   


   // call by value


}