#include <stdio.h>


int square(int num) {

   int sq = num * num;

   return sq;
}






int main() {

   int number = 10;

   int sq = square(10);

   printf("%d", sq);

}