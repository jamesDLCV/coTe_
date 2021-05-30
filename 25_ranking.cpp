#include <stdio.h>

int main() {
	freopen("25input.txt", "rt", stdin);
	int n, i, j, a[101], rank[101];
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		rank[i] = 1;
	}
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			if (a[i] < a[j]) {
				++rank[i];
			}
		}
	}
	
	for (i = 0; i < n; ++i) {
		printf("%d ", rank[i]);
	}
	
	return 0;
}
