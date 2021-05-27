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
		if (diff > 0 && diff < n && ch[diff] == 0) {
			ch[diff] = 1;
		}			
		else {
			printf("NO\n");
			return 0;
		}
		pre = now;
	}
	printf("YES\n");
	
	return 0;
}
