#include <stdio.h>
// right brace
int main() {
	freopen("08input.txt", "rt", stdin);
	char brace[31];
	int i, cnt = 0;
	scanf("%s", &brace);
	for (i = 1; brace[i] != '\0'; ++i) {
		if (brace[i] == '(')	++cnt;
		else --cnt;
		if (cnt < 0) break;	
	}
	
	if (cnt == 0)	printf("YES");
	else printf("NO");
	
	return 0;
}
