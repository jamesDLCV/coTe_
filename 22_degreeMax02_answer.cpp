#include <stdio.h>
#include <vector>

int main() {
	freopen("22input.txt", "rt", stdin);
	int n, k, i, j, sum = 0, max;
	scanf("%d %d", &n, &k);
	std::vector<int> temp(n);
	
	for (i = 0; i < n; ++i) {
		scanf("%d", &temp[i]);
	}
	for (i = 0; i < k; ++i) {
		sum += temp[i];
	}
	max = sum;
		
	for (i = k; i < n; ++i) {
		sum = sum + temp[i] - temp[i - k];
		if (max < sum) max = sum;
	}
	printf("%d", max);
	
	return 0;
}
