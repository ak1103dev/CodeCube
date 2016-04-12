#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	char x[n+1], y[m+1];
	cin >> x;
	cin >> y;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		if(x[i] == y[0]) {
			if (n-i >= m) {
				int c = 1;
				for(int j = 1; j < m; j++) {
					if (x[i+j] == y[j]) {
						c++;
					}
				}
				if (c == m) {
					count++;
				}
			}
		}
	}
	cout << count << '\n';
}
