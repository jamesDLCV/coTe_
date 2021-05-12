#include <stdio.h>
using namespace std;

int main() {
	freopen("07input.txt", "rt", stdin);
	
	char wordVirus[101], wordCorrect[101];
	int i, p = 0;
	gets(wordVirus);
	
	for (i = 0; wordVirus[i] != '\0'; ++i) {
		if (wordVirus[i] != ' ') {
			if (wordVirus[i] >= 65 && wordVirus[i] <= 90) {
				wordCorrect[p++] = wordVirus[i] + 32;
			} else {
				wordCorrect[p++] = wordVirus[i];
			}
		}
	}
	wordCorrect[p] = '\0';
	printf("%s\n", wordCorrect); 
		
	return 0;
}
