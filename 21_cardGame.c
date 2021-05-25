#include <stdio.h>

int main() {
	freopen("21input.txt", "rt", stdin);
	int i, n = 10, aw = 0, bw = 0, lw = 0, a[10], b[10];
	
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; ++i) {
		scanf("%d", &b[i]);
	}
	
	for (i = 0; i < n; ++i) {
		if (a[i] == b[i]) {
			printf("D ");
			++aw;
			++bw;
		} else if (a[i] > b[i]) {
			printf("A ");
			aw += 3;
			lw = 1;	// if aw wins, lw = 1.
		} else if (a[i] < b[i]) {
			printf("B ");
			bw += 3;
			lw = 2;
		}	
	}
	
	printf("\n%d %d ", aw, bw);
	if (aw == bw) {
		if (lw == 1) 	
			printf("A\n");
		else if (lw == 2)
			printf("B\n");
	} else if (aw > bw) printf("A\n");
	else if (aw < bw) printf("B\n");
	
	return 0;
}
