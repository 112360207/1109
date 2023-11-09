#include <stdio.h>

void hanoi(int n, char source, char auxiliary, char target) {
	if (n == 1) {
		printf("Move disk 1 from %c to %c\n", source, target);
		return;
	}
	hanoi(n - 1, source, target, auxiliary);
	printf("Move disk %d from %c to %c\n", n, source, target);
	hanoi(n - 1, auxiliary, source, target);
}

int main() {
	int numdisks; 
	printf("Please enter the numdisks:");
	scanf("%d", &numdisks);
	hanoi(numdisks, 'A', 'B', 'C');
	return 0;
}