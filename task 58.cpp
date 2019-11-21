#include <iostream>
#include <sstream>
using namespace std;
 
 int findMore(int x){
   string day,month,year;
   stringstream s ;
   cin>>day>>month>>year;
   s<<year;
   s<<month;
   s<<day;
   s>>x;
   return x;
}
 
int main()
{
   int a=0;
 
   findMore(a)<findMore(a) ? cout<<"yes" : cout<<"no";
   system("pause");
   return 0;
}