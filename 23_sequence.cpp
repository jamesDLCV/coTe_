#include <stdio.h>
#include <vector>

int main() {
	freopen("23input.txt", "rt", stdin);
	int n, i, pre, now, cnt = 1, max;
	scanf("%d", &n);
	std::vector<int> seq(n);	
	for (i = 0; i < n; ++i) {
		scanf("%d", &seq[i]);
	}
	pre = seq[0];
	max = pre;
	for (i = 1; i < n; ++i) {
		if (pre <= seq[i]) {
			++cnt;
			if (max < cnt) {
				max = cnt;
			}				
		} else if (pre > seq[i])	// else cnt = 1;
			cnt = 1;
		pre = seq[i];			
	}
	printf("%d", max);
	return 0;
}
