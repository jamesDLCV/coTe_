#include <stdio.h>
#include <vector>
#include <algorithm>

int main() {
	freopen("24input.txt", "rt", stdin);
	int n, i, pre, now, diff;
	scanf("%d", &n);	
	
	std::vector<int> ch(n);
	scanf("%d", &pre);
	
	for (i = 1; i < n; ++i) {
		scanf("%d", &now);
		diff = abs(pre - now);
		if (diff = 0 || diff > n - 1 || ch[diff] == 1) {
			printf("NO\n");
			return 0;
		}			
		else {
			ch[diff] = 1;
		}
		pre = now;
	}
	printf("YES\n");
	
	return 0;
}
