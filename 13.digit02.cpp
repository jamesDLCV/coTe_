#include <stdio.h>
char cntArr[10];
int main() {
	freopen("13input.txt", "rt", stdin);
	char input[101];
	int i, digit, res, max = -2147000000;
	scanf("%s", &input);
	for (i = 0; input[i] != '\0'; ++i) {
		digit = input[i] - 48;
		++cntArr[digit];
	}
	for (i = 0; i <= 9; ++i) {
		if (cntArr[i] >= max) {
			max = cntArr[i];	// 중복 출현 계산 
			res = i;			// 제일 많이 나온 숫자 
		}
	}
	printf("%d", res);
	return 0;
}
