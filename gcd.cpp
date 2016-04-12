/*
 * =====================================================================================
 *
 *       Filename:  gcd.cpp
 *
 *    Description:  Great Common Divisor
 *
 *        Version:  1.0
 *        Created:  21/01/2559 09:27:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (a == 0 || b == 0)
		return a + b;
	if (b > a)
		return gcd(a, b%a);
	else
		return gcd(b, a%b);
}

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << gcd(a, b) << '\n';
}
