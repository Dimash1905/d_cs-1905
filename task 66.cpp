#include <iostream>
using namespace std;
int main()
{
   int a, c, d, f, g, h;
   cin >> a>>h;
   c= a / 10 % 10;
   d = a / 10 / 10 % 10;
   f = h/10%10;
   g =h/10/10%10;
   cout<<d<<c<<g<<f;
}