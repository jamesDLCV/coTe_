#include <stdio.h>

int main() {
	
	int n, i, tmp, cnt;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		tmp = i;
		while (tmp > 0) {
			tmp /= 10;
			++cnt;
		}
	}
	printf("%d", cnt);
	
	return 0;
}


