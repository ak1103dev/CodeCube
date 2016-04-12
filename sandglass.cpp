#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	if(num % 2 == 0) {
		cout << "error" << '\n';
	} else {
		for(int i = 0; i < num/2+1; i++) {
			for(int j = 0; j < i; j++) {
				cout << ' ';
			}
			for(int j = 0; j < num-2*i; j++) {
				cout << '*';
			}
			cout << '\n';
		}
		for(int i = num/2+1; i < num; i++) {
			for(int j = 0; j < num-i-1; j++) {
				cout << ' ';
			}
			for(int j = 0; j < 2*i + 2 - num; j++) {
				cout << '*';
			}
			cout << '\n';
		}
	}
}


//num - (2*(num-i-1))
	//num - 2num + 2i + 2
