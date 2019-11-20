#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a > 1 && a < 180) {
int b = (a - 1) / 20 + 1;
	int c = ((a - 1) % 20) / 2;
	cout << (a % 2) * b + ((a + 1) % 2) * c;
	}
	else {
		cout << "does not exist";
	}
}