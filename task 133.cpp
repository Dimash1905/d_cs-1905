
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int k, n;
	cin >> k;
	int s = 0;
	for (int i = 0; i < k; i++) {
		s = s + i;
		if (s == k) {
			cout << i << endl;
		}
	}
	return 0;
}
