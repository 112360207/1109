#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
	unsigned long long int a = n;
	unsigned long long int b = 0;
	unsigned long long int c = 1;

	if (n >= 2) {
		for (int k = 2; k <= n; k++) {
			a = b + c;
			c = b;
			b = a;
		}
	}

	return a;
}

int main() {
	unsigned int n = 10; // 材10创猧ê计
	printf("材 %u 创猧ê计琌%llu\n", n, fibonacci(n));
	return 0;
}




