#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double x1, x2;
	double d = sqrt(b * b - 4 * a * c);
	x1 = ((-b) + d) / 2.0;
	x2 = ((-b) - d) / 2.0;
	cout << x1 << " " << x2;
}