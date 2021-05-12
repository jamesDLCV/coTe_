#include <iostream>
using namespace std;

int main() {
	freopen("08input.txt", "rt", stdin);
	
	char brace[31];
	int i, openBrace = 0, closeBrace = 0, rightBrace = 0;
	scanf("%s", brace);
	
	for (i = 0; brace[i] != '\0'; ++i) {
		if (brace[i] == '(') openBrace++;
	    else if (brace[i] == ')') closeBrace++;
	}
	rightBrace = closeBrace - openBrace;
	
	if (rightBrace == 0) printf("YES");
	else if (rightBrace > 0 || rightBrace < 0) printf("NO"); 
	
	return 0;
}


