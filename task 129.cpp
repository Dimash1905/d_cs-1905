#include <iostream>
using namespace std;
int main() {
	int i, j, s, l, n;
	cin >> n;
	for (i = 2; i < n; i++) {
		s = 0;
		for (j = 1; j < i; j++)
			if (i % j == 0)
				s += j;
		if (s == i)
			cout << i << " ";
	}
}