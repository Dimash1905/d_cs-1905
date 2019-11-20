#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a;
	b = a % 10;
	c = a / 10 % 10;
	d = a / 10 / 10 % 10;
	if (b <= 5) {
		cout << b;
	}
	if (c <= 5) {
		cout << c;
	}
	if (d <= 5) {
		cout << d;
	}
	if (b > 5) {
		cout << b;
	}if (c > 5) {
		cout << c;
	}
	if (d > 5) {
		cout << d;
	}
}