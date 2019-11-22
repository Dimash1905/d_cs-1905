#include<iostream>
using namespace std;
bool IsPrime(int x)
{
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	int n ; 
	cin >> n;
	for (int i = 2, j = 1; j <= n; i++)
		if (IsPrime(i) && IsPrime(i + 2))
			cout << ("{0}: {1} {2}", j++, i, i + 2);
	return 0;
}

