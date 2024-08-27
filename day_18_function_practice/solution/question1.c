#include<stdio.h>

// question 1 --> create a basic function that receive one float number and return a float number 


float gaurav(float a) {

   return a;
}



// question 2 -->  create basic function and print number 0 to 10 inside that function


void print10() {

   for(int i=0; i<=10; i++) {

      printf("%d\n",i);

   }

}



// question 3 --> create a basic function that receive one number n and print numbers from 1 to n 


void printN(int n) {

   for(int i=1; i<n; i++) {

      printf("%d\n", i);
   }
}



// question 4 --> create a basic function that receive one number k and return power of 4 of that number


int power(int k) {

   return k * k * k * k;
}



// question 5 --> create a function that receive one number n and print only divisible by 4, 5 and 6  from 1 to n


void divisor(int n) {

   for(int i=0; i<=n; i++) {

      if(i % 4 == 0 && i % 5 == 0 && i % 6 == 0) {
         printf("%d\n", i);
      }
   }

}





void main() {

   // print10();

   // printN(3546);

   // int n = power(3);

   // printf("%d", n);


   divisor(1000);



}
