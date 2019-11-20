#include <iostream>
using namespace std;
int main()
{
	int n, m4, m3, m2;
	cin >> n;
	m4 = n % 10;
	m3 = n / 10 % 10;
	m2 = n / 10 / 10 % 10;
	swap(m4, m2);
	cout << m2 << m3 << m4 << endl;
	return 0;
}