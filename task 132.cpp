
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n ; 
	for (int i = 0; i <= 10000; i++) {
		int one = i / 1000;
		int two = (i - i / 1000 * 1000) / 100;
		int three = ((i - i / 1000 * 1000) - (i - i / 1000 * 1000) / 100 * 100) / 10;
		int four = i % 10;
		int sum = one + two + three + four;
		for(int j=2;j<10;j++)
			if (pow(sum, j) == i && i>10) {
				cout << i <<" ";
		}
   }
	return 0;
}
