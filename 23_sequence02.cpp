#include <stdio.h>
#include <vector>

int main() {
	freopen("23input.txt", "rt", stdin);
	int n, i, cnt = 1, max = 1;
	scanf("%d", &n);
	std::vector<int> seq(n);
	
	for (i = 0; i < n; ++i) {
		scanf("%d", &seq[i]);
	}
	
	for (i = 0; i < n - 1; ++i) {
		if (seq[i] <= seq[i + 1]) {
			++cnt;
			if (max < cnt) 
				max = cnt;								
		}
		else 
			cnt = 1;
	}
	printf("%d", max);
	return 0;
}
