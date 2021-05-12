#include <stdio.h>

int digit_sum(int x) {
	
	int sum, remainder; 
	
	while (x > 0) {
		remainder = x % 10;
		sum += remainder;
		x /= 10;
	}
	
	return sum;
	
}


int main() {
	freopen("10input.txt", "rt", stdin);
	int n, i, num, sum, res, max = -2147000000;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &num);
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;
		} else if (sum == max) {
			if (res < num) {
				res = num;
			}
		}
	}
	printf("%d", res);
	
	return 0;
}
