 #include <iostream>101
using namespace std;
int main() {
	int i1, i2, i3, i4, i5;
	for (int i = 10000; i <= 99999; i++) {
		i5 = i % 10;
		i4 = i % 100 / 10;
		i3 = i % 1000 / 100;
		i2 = i % 10000 / 1000;
		i1 = i % 100000 / 10000;
		if (i % 2 == 0 && i3 & 2 != 0 && (i1 + i2 + i3 + i4 + i5) % 4 == 0) {
			cout << i1 << i2 << i3 << i4 << i5 << " ";
		}
	}
	return 0;
}