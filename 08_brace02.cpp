#include <iostream>
using namespace std;

int main() {
	freopen("08input.txt", "rt", stdin);
	
	char brace[31];
	int i, openBrace = 0;
	scanf("%s", brace);
	
	for (i = 0; brace[i] != '\0'; ++i) {
		if (brace[i] == '(') openBrace++;
	    else if (brace[i] == ')') openBrace--;
	    if (openBrace < 0) break;
	}
		
	if (openBrace == 0) printf("YES");
	else printf("NO"); 
	
	return 0;
}

// this answer code is better than the one I made. 
// faster than mine 

