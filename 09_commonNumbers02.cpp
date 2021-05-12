#include <stdio.h>

int main() {
	freopen("09input.txt", "rt", stdin);
	int n, i, j, cnt;
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i) {
		cnt = 0;
		for (j = 1; j <= i; ++j) {
			if (i % j == 0) {
				++cnt;
			}
		}
		printf("%d", cnt);
	}
	
	return 0;
}
