#include <stdio.h>
#include <vector>

int main() {
	freopen("22input.txt", "rt", stdin);
	int n, k, i, j, sum, max = -2147000000;
	scanf("%d %d", &n, &k);
	std::vector<int> deg(n);
	
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
	printf("%d", max);
	
	
	return 0;
}
