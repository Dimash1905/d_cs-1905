
#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a < 5 && b < 5))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	if ((a < 5 && c < 5))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	if ((b < 5 && c < 5))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;

}