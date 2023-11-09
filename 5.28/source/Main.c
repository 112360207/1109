#include <stdio.h>

int change_case_alphabet(char character) {
	if (character >= 'a' && character <= 'z') {
		return character - 32;  // 小寫轉大寫
	}
	else if (character >= 'A' && character <= 'Z') {
		return character + 32;  // 大寫轉小寫
	}
	else {
		return character;  // 非字母字符號保持不變
	}
   }
	int main() {
		char input;
		printf("請輸入一個字母：");
		scanf("%c", &input);

		int result = change_case_alphabet(input);

		printf("更改大小寫後的結果為：%c\n", result);

		return 0;
	}

