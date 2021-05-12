#include <stdio.h>

int digit_sum(int x) {
	
	int tmp, cnt = 0;
	
	while (x > 0) {
		tmp = x % 10;
		++cnt;
		x /= 10;
	}
	
	return cnt;
}

int main() {
	
	int n, i, sum = 0;
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i) {
		sum += digit_sum(i);
	}
	printf("%d", sum);
	
	return 0;
}
