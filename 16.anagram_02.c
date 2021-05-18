#include <stdio.h>
//#include <algorithm> 

char a[60], b[60];
int main() {
	freopen("16input.txt", "rt", stdin);
	int i;
	char n[101];
	scanf("%s", &n);
	for (i = 0; n[i] != '\0'; ++i) {
		if (n[i] >= 65 && n[i] <= 90) {
			a[n[i] - 65]++;
			printf("%d", a[n[i] - 65]);
		} 
		else {
			a[n[i] - 70]++;
			printf("%d", a[n[i] - 70]);	
		}		
	}
	printf("\n");
	
	scanf("%s", &n);
	for (i = 0; n[i] != '\0'; ++i) {
		if (n[i] >= 65 && n[i] <= 90) {
			b[n[i] - 65]++;
			printf("%d", b[n[i] - 65]);
		} 
		else {
			b[n[i] - 70]++;
			printf("%d", b[n[i] - 70]);	
		}
	}
	
	for (i = 0; i < 53; ++i) {
		if (a[i] != b[i]) {
			printf("NO");
			exit(0);
		}
	}
	printf("YES");	
	return 0;
}
