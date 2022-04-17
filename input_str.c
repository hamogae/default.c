#include <stdio.h>

int main() {
  char str[16];
  printf("문자열을 입력해!(최대 15자 까지야!): ");
	scanf("%s", str);
	printf("입력한 문자열은 \"%s\"이야!\n", str);
	return 0;
}
