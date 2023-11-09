#include <stdio.h>

int power(int base, int exponent) {
	if (exponent == 1) {
		return base;
	}
	else {
		return base * power(base, exponent - 1);
	}
}

int main() {
	int i, j;
	printf("請輸入數字(兩個):");
	scanf("%d", &i);
	scanf("%d", &j);
	int result = power(i, j);
	printf("%d\n", result);
	return 0;
}
