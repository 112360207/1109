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
	printf("�п�J��Ӿ�ơG");
	scanf_s("%d %d", &num1, &num2);

	int result = find_lcm(num1, num2);

	printf("�̤p�����Ƭ��G%d\n", result);

	return 0;
}