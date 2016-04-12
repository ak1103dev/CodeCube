#include <stdlib.h>
#include <iostream>

using namespace std;

long gcd(long a, long b) {
	if (a == 0 || b == 0)
		return a + b;
	if (b > a)
		return gcd(a, b%a);
	else
		return gcd(b, a%b);
}

long lcm(long a, long b) {
	return a*b/gcd(a, b);
}

int main() {
	int num;
	cin >> num;
	long x[num];
	for (int i = 0; i < num; i++) {
		cin >> x[i];
	}
	long y = x[0];
	for (int i = 0; i < num-1; i++) {
		y = lcm(y, x[i+1]);
	}
	cout << y << '\n';
}
