
#include <iostream>
using namespace std;
int main()
{
	int n,c,c1,c2,c3, m3, m2, m1;
	cin >> n>>c;
	m3 = n % 10;
	m2 = n / 10 % 10;
	m1 = n / 10 / 10 % 10;
	c3 = c % 10;
	c2 = c / 10 % 10;
	c1 = c / 10 / 10 % 10;
		cout << m1<<m2<<m3<<c1<<c2<<c3<< endl;

	return 0;
}