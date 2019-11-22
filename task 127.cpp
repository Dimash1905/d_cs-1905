#include <iostream>
using namespace std;
int main() {
    int n, k=0;
    cin>>n;
    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            cout<<"Not prime number"<<endl;
            k=1;
            break;
        }
    }
    if (k==0)
        cout<<"Prime number"<<endl;
    return 0;