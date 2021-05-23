#include <stdio.h>

int main() {
	freopen("19input.txt", "rt", stdin);
	int n, i, cnt = 0, seat[101], max;
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i) {
		scanf("%d", &seat[i]);
	}
	max = seat[n];
	
	for (i = n - 1; i >= 1; --i) {
		if (max < seat[i]) {
			max = seat[i];
			++cnt;;
		}
	}
	printf("%d", cnt);
	
	return 0;
}
