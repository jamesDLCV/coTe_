#include <stdio.h>

int main() {
	freopen("23input.txt", "rt", stdin);
	int n, i, pre, now, cnt = 1, max = 1;
	scanf("%d", &n);
	scanf("%d", &pre);
	
	for (i = 1; i < n; ++i) {
		scanf("%d", &now);
		if (pre <= now) {
			++cnt;
			if (max < cnt)
				max = cnt;
		} 
		else
			cnt = 1;
		pre = now;			
	}
	printf("%d", max);
	return 0;
}
