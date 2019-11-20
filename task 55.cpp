
#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	int p = 0;
	cin >> a >> b >> c;
	if (a > 0) {
		p = p + 1;
	}
	if (b > 0) {
		p = p + 1;
	}
	if (c > 0) {
		p = p + 1;
	}
	cout << p << endl;
}