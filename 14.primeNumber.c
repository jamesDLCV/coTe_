#include <stdio.h>
#include <stdbool.h>	// bool type

int reverse(int x);
bool isPrime(int x);

int main() {
	freopen("14input.txt", "rt", stdin);
	int n, i, num, tmp; 
	
	scanf("%d", &n);
	
	for (i = 0; i < n; ++i) {
		scanf("%d", &num);
		tmp = reverse(num);		
		if (isPrime(tmp)) {
			printf("%d ", tmp);
		}
	}
		
	return 0;
}

int reverse(int x) {
	
	int res = 0, tmp;
	
	while (x > 0) {
		tmp = x % 10;
		res = res * 10 + tmp;
		x /= 10;		
	}
	
	return res;
	
}

bool isPrime(int x) {
	bool prime = true;
	int i;
	
	if (x == 1) return false;
	
	for (i = 2; i < x; ++i) {
		if (x % i == 0)	{
			prime = false;
			break;	
		}
	}
	
	return prime;	
}
