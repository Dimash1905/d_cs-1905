#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (i + j == a - 1 ||i==j) {
				cout << '1';
			}
			else {
				cout << '0';
			}
		}
		cout << endl;
	}
}