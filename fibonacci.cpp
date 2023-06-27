#include <stdio.h>
int main() {
	unsigned int num1 = 1, num2 = 1, num3 = 1, k = 0, x = 0;
	while (k <= 20) {
		num3 = num1 + num2;
		x = num2;
		num2 = num3;
		num1 = x;
		k++;
	}
	printf("%d¹øÂ°ÀÇ num3 = %d", k+2, num3);

	return 0;
}