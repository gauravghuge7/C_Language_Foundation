

#include <stdio.h>

int square(int a) {
 	
	int sq = a * a;

	return sq;
}



int main() {
	
	int n = 15;
	int sq = square(n);
	
	printf("square = %d", sq);    // output
}
