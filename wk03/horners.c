#include <stdio.h>

int horners(int* coeff, int length, int x) {
	int acc = 1;
	int result = 0;
	for (int i = length-1; i >= 0; i--) {
		result += coeff[i]*acc;
		acc = acc*x;
	}
	return result;
}

int main(void) {
	int array[5] = {1,2,3,4,5}; // a_n, a_n-1
	printf("%d\n", horners(array, 5, 2)); // p(x) === p(2)
	return 0;
}
