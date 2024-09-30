#include <stdio.h>

int add(int a) {

   a = 68;

   printf("add function %d \n", a);
}


int main() {

   int a = 20;

   printf("before call add function %d \n", a);

   add(a);

   printf("after call add function %d \n", a);

}