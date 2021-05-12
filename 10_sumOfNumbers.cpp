#include <stdio.h>

int digit_sum(int x);

int main() {
	//freopen("10input.txt", "rt", stdin);	
	int n, i, num, sum, res, max = -2147000000;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		scanf("%d", &num);
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;	
		} else if (sum == max) {
			if (num > res)	res = num;
		}		
	}
	printf("\n%d\n", res);
	return 0;
}

int digit_sum(int x) {
	int remain, sum = 0;		// sum = 0 is needed. 초기화해줘야한다 
	
	while (x > 0) {
		remain = x % 10;
		sum += remain;
		x /= 10;	
	}
	return sum;	
}
