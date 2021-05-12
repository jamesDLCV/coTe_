#include <stdio.h>

int main() {
	//freopen("08input.txt", "rt", stdin);
	// how many common numbers in each number?
	int cnt[50001];
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {		
		for (j = i; j <= n; j = j + i) {		
			cnt[j]++; 
		}		
	}
	
	for (i = 1; i <= n; ++i) {
		printf("%d", cnt[i]);
	}
	
	return 0;
}
