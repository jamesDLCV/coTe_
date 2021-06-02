#include <stdio.h>


int main() {
	
	freopen("28input.txt", "rt", stdin);
	int n, i, j, tmp, cnt1 = 0, cnt2 = 0; 
	scanf("%d", &n);
	
	for (i = 2; i <= n; ++i) {
		tmp = i;
		j = 2;
		while (1) {
			if (tmp % j == 0) {
				if (tmp % 2 == 0) cnt1++;
				else if (tmp % 5 ==0) cnt2++;
				tmp /= j;							
			} 
			else j++;
			if (tmp == 1) break;
		}		
	}
	
	if (cnt1 <= cnt2) printf("%d", cnt1);
	else printf("%d", cnt2);
	
	return 0;
}
