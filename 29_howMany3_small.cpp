#include <stdio.h>

int main() {
	freopen("29input.txt", "rt", stdin);
	int n, i, tmp, cnt = 0, digit;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		tmp = i;
		while (tmp > 0) {
			digit = tmp % 10;
			if (digit == 3) cnt++;
			tmp /= 10;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}
