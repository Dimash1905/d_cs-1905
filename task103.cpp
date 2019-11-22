#include <iostream>103
#include <cmath>
using namespace std;
int main() {
	int i1, i2, i3;
	for (int i = 1000; i <= 9999; i++) {
		i3 = i % 10;
		i2 = i % 100 / 10;
		i1 = i % 1000 / 100;
		if (i == pow((i1 + i2 + i3), 3)) {
			cout << i1 << i2 << i3 << " ";
		}
	}
	return 0;
}