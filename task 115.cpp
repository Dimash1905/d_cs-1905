#include<iostream>    
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a > 0 || a < 10)
	{
		for (int i = 1; i <= 10; i++)
		{
			cout << a << " * " << i << " = " << a * i << endl;
		}
	}
}