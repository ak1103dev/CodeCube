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

int main() {
	long a, b;
	cin >> a;
	cin >> b;
	cout << a*b/gcd(a, b) << '\n';
}
