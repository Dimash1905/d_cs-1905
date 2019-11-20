
#include <iostream>
using namespace std;
int main()
{
	char c[4];
	for (int i = 0; i < 4; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (c[i] > c[j]) {
				swap(c[i], c[j]);
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << c[i] << endl;
	}
	return 0;
}

