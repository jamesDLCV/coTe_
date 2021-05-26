#include <stdio.h>
char deg[100000];

int main() {
	freopen("22input.txt", "rt", stdin);
	int n, k, i, j, sum, max = -2147000000;
	
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; ++i) {
		scanf("%d", &deg[i]);
	} 
	
	for (i = 0; i < n - k; ++i) {
		sum = 0;
		for (j = i; j < i + k; ++j) {
			sum += deg[j];			
		}		
		if (max < sum) 
			max = sum;		
	}
	printf("%d\n", max);
	return 0;
}
