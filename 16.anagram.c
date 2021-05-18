#include <stdio.h>
char a[53], b[53];

int main() {
	freopen("16input.txt", "rt", stdin);
	int i;
	char str[101];
	scanf("%s", &str);
	for (i = 0; str[i] != '\0'; ++i) {
		if (str[i] >= 65 && str[i] <= 90) {
			a[str[i] - 65]++;
		} else {
			a[str[i] - 70]++;
		}
	}
	
	scanf("%s", &str);
	for (i = 0; str[i] != '\0'; ++i) {
		if (str[i] >= 65 && str[i] <= 90) {
			b[str[i] - 65]++;
		} else {
			b[str[i] - 70]++;
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
