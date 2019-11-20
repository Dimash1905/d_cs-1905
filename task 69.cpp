#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b > c || a < b + c || b < c + a) {
		double p = (a + b + c) / 2.0;
		double s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << s;
	}
	else {
		cout << "does not exist";
	}
}