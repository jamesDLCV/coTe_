#include <stdio.h>

int main() {
	freopen("18input.txt", "rt", stdin);
	int n, m, i, alarm, cnt = 0, max = -2147000000;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; ++i) {
		scanf("%d", &alarm);
		if (alarm > m) {
			++cnt;
		} else {
			cnt = 0;
		}
		if (max < cnt) {
			max = cnt;
		}
	}
	if (max == 0) printf("-1");
	else printf("%d", max);
	
	return 0;
}
