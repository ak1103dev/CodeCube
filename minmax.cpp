#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int x[n];
	for (int i = 0; i < n; ++i) {
		cin >> x[i];
	}
	cout << *max_element(x,x+n) << '\n';
	cout << *min_element(x,x+n) << '\n';
}
