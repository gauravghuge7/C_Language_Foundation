

#include <stdio.h>
#include <stdlib.h>


int primeNumber(int n) {

   int i;
   for (i = 2; i < n; i++) {
      if (n % i == 0) {
         return 0;
      }
   }
}

int main() {

}