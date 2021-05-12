#include <iostream>
using namespace std;

int main() {
	freopen("06input.txt", "rt", stdin);
	char str[100];
	int res = 0, cnt = 0, i;
	scanf("%s", &str);
	for (i = 0; str[i] != '\0'; ++i) {
		if (str[i] >= 48 && str[i] <=57) {
			res = res * 10 + (str[i] - 48);		// 숫자 처리ㅋㅋ 
		}
	}
	printf("%d\n", res);
	for (i = 1; i <= res; ++i) {
		if (res % i == 0) ++cnt;
	}
	printf("%d\n", cnt);
	
	return 0;
}
