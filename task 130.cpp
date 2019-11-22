#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m1, m2, m3, m4, m5, m6,sum;
	m6 = n % 10;
	m5 = n / 10 % 10;
	m4 = n / 10 / 10 % 10;
	m3 = n / 10 / 10 / 10 % 10;
	m2 = n / 10 / 10 / 10 / 10 % 10;
	m1 = n / 10 / 10 / 10 / 10 / 10 % 10;
	sum = m1 + m2 + m3 + m4 + m5 + m6;
	if (sum % 13 != 0) {
		cout << "Eto neschastlivyi nomer";
	}
	else
		cout << "schastyie";
	return 0;
}