#include <stdio.h>
char digitArr[10];	// 0~9, 10개 
int main() {
	freopen("13input.txt", "rt", stdin);
	char n_input[101];
	int i, res, digit, max = -2147000000;
	scanf("%s", &n_input);
	for (i = 0; n_input[i] != '\0'; ++i) {
		digit = n_input[i] - 48;
		digitArr[digit]++;
	}
	for (i = 0; i <= 9; ++i) {
		if (digitArr[i] >= max) {
			max = digitArr[i];
			res = i;
		}
	}
	
	printf("%d", res);
	
	return 0;
}
