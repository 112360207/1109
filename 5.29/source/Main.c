#include <stdio.h>

int find_lcm(int num1, int num2) {
	int max, lcm, i;
	if (num1 > num2) {
		max = num1;
	}
	else {
		max = num2;
	}

	for (i = max; ; i++) {
		if (i % num1 == 0 && i % num2 == 0) {
			lcm = i;
			break;
		}
	}

	return lcm;
}

int main() {
	int num1, num2;
	printf("請輸入兩個整數：");
	scanf_s("%d %d", &num1, &num2);

	int result = find_lcm(num1, num2);

	printf("最小公倍數為：%d\n", result);

	return 0;
}