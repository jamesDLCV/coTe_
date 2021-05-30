#include <stdio.h>
#include <vector>

// answer
int main() {
	freopen("26input.txt", "rt", stdin);
	int n, i, j, rank;
	scanf("%d", &n);
	std::vector<int> run(n);
	
	for (i = 0; i < n; ++i) {
		scanf("%d", &run[i]);
	}
	
	printf("1 ");
	for (i = 1; i < n; ++i) {
		rank = 0;
		for (j = i - 1; j >= 0; --j) {
			if (run[i] <= run[j])
				rank++;
		}		
		printf("%d ", rank + 1);
	}
	
	return 0;
}
