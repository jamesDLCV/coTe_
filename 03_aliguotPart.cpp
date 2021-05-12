#include <iostream>
using namespace std;

int main() {
	// 진약수 
	int n, i, sum = 1;
	cin >> n;
	cout << "1";				// 규칙을발견하라 어떤패턴으로갈것인가? 
	for (i = 2; i < n; ++i) {
		if (n % i == 0) {
			cout << " + " << i;
			sum += i;
		}
	} 
	cout << " = " << sum;
	return 0;
}
 
