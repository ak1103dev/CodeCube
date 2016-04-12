//#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n, b;
	scanf("%d", &n); //cin >> n;
	scanf("%d", &b); //cin >> b;
	vector<int> prime;
	if(n >= 2)
		prime.push_back(2);
	for(int i = 3; i <= n; i++) {
		int count = 0;
		for(int j = 0; j < prime.size() && prime[j] <= (int)sqrt(i); j++) {
			if(i % prime[j] == 0) {
				count++;
				break;
			}
		}
		if(count == 0) {
			prime.push_back(i);
		}
	}
	n = prime.size();
	if(n >= b)
		printf("%d\n", n-b); //cout << n-b << '\n';
	else
		printf("0"); //cout << 0 << '\n';
}
