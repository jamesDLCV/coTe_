#include <stdio.h>

int main() {
	freopen("17input.txt", "rt", stdin);
	int n, i, num, ans, j, sum;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d %d", &num, &ans);
		sum = 0;
		for (j = 1; j <= num; ++j) {
			sum += j;
		}
		if (ans == sum) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
