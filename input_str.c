#include <stdio.h>

int main() {
	char str[16];
	printf("문자열을 입력해주세요!(최대 15자): ");
	scanf("%s", str);
	printf("입력한 문자열은 \"%s\"입니다!\n", str);
	return 0;
}
