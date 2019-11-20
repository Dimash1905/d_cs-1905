#include <iostream>
using namespace std;
int main()
{
	int n, m3, m2, m1,m4;
	cin >> n;
	m4 = n % 10;
	m3 = n / 10 % 10;
	m2 = n / 10 / 10 % 10;
	m1 = n / 10 / 10 / 10 % 10;
	if (m4 == m1 && m3==m2) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}