#include <stdio.h>

int main() {
	int number;
	printf("수를입력해주세요: ");
	scanf("%d", &number);
	printf("%d(+1)\n%d(-1)\n", number+1, number-1);
	return 0;
}
