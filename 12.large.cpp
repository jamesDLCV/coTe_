#include <stdio.h>

int main() {
	freopen("12input.txt", "rt", stdin);
	int n, c = 1, d = 9, sum = 0, res = 0;
	scanf("%d", &n);
	while (sum + d < n) {
		res += c * d;
		sum += d;
		++c;
		d *= 10;
	}
	res = res + ((n - sum) * c);
	printf("%d", res);		
	return 0;
}
