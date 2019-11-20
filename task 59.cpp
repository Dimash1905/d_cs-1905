
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, m4, m3, m2, m1;
	cout << "Введите четырехзначное число \n";
	cin >> n;
	{

		if (n < 1000) cout << "Введенное число не четырех значное";
	}
	m4 = n % 10;
	m3 = n / 10 % 10;
	m2 = n / 10 / 10 % 10;
	m1 = n / 10 / 10 / 10 % 10;
	cout << m1 << " " << m2 << " " << m3 << " " << m4 << " ";
	cout << "\n";

	if (m1 > m2 > m3 > m4) {
		cout << "Yes";
	}
	else { cout << "No"; 
	}
	return 0;
}