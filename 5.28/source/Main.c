#include <stdio.h>

int change_case_alphabet(char character) {
	if (character >= 'a' && character <= 'z') {
		return character - 32;  // �p�g��j�g
	}
	else if (character >= 'A' && character <= 'Z') {
		return character + 32;  // �j�g��p�g
	}
	else {
		return character;  // �D�r���r�Ÿ��O������
	}
   }
	int main() {
		char input;
		printf("�п�J�@�Ӧr���G");
		scanf("%c", &input);

		int result = change_case_alphabet(input);

		printf("���j�p�g�᪺���G���G%c\n", result);

		return 0;
	}

