#include <stdio.h>

int main() {
	
	int n, i, cnt, tmp;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		tmp = i;	// we need a tmp. Because we need to devide it. 
		while (tmp > 0) {
			tmp /= 10; 
			++cnt;
		}
	}
	printf("%d", cnt);
	return 0;
}
