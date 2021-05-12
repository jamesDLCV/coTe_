#include <stdio.h>

int digit_sum(int x) {
	int temp, sum;
	
	while (x > 0) {
		temp = x % 10;
		sum += temp;
		x /= 10;	
	}
	return sum;	
}

int main() {
	int n, i, num, res = 0, sum = 0, max = -2147000000;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &num);
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;
		}
		else if (sum == max) {
			if (res < num)	res = num;
		}		
	}
	printf("%d", res);
	
	return 0;
}
