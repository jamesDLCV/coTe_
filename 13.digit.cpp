#include <stdio.h>
char countArr[10];
int main() {
	freopen("13input.txt", "rt", stdin);
	
	char n[101];
	int i, digit, res, max = -2147000000;
	
	scanf("%s", &n);
	
	for (i = 0; n[i] != '\0'; ++i) {
		digit = n[i] - 48;
		++countArr[digit];
	}
	
	for (i = 0; i <= 9; ++i) {
		if (max <= countArr[i]) {
			max = countArr[i]; 
			res = i;
		}
	}
	
	printf("%d", res);
	
	return 0;
}
