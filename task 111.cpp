#include <iostream>
using namespace std;
int main()
	{
		int n;
		cin >> n;
		for (int j = 0; j < 2 * n; j++)
			cout << "A";
		cout << '\n';
		for (int i = 1; i <= n - 1; i++)
		{
			cout << "A";
			for (int j = 1; j < 2 * n - 1; j++)
				cout << "B";
			cout << "A\n";
		}
		for (int j = 0; j < 2 * n; j++)
			cout << "A";
		cout << '\n';
	}