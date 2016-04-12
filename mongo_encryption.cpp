#include <cstdlib>
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int code(char b, char a) {
	if (b - a < 10 && b - a >= 0) {
		return b - a;
	}
	else if (26 + b - a < 10) {
		return 26 + b - a;
	}
	return -1;
}

int main() {
	string str, m;
	cin >> str;
	cin >> m;
	int x[str.size()];
	bool b = true;
	for (int i = 0; i < str.size(); ++i) {
		int a =  code(tolower(str[i]), tolower(m[i]));
		if (a == -1) {
			cout << "R.I.P.";
			b = false;
			break;
		}
		else {
			x[i] = a;
		}

	}
	if (b) {
		for (int i = 0; i < str.size(); i++) {
			cout << x[i];
		}
	}
	cout << '\n';
}
