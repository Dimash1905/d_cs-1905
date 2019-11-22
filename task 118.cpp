#include <iostream>
using namespace std;
int main () {
    int a,k=0;
    while(a!=0)
    {
        cin>>a;
        if(a%2==0 && a!=0)
        k++;
    }
    cout<<k;
    return 0;
}