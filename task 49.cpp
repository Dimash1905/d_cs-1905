#include<iostream>
#include<cmath>
using namespace std;
    int main(){
    	int a,b,c,d;
    	cin>>a>>b>>c>>d;
    	if(a%2==0&&a>b&&a>c&&a>d){
		cout<<a;
		}
		else if(b%2==0&&b>a&&b>c&&b>d){
			cout<<b;
		}
		else if(c%2==0&&c>a&&c>b&&c>d){
			cout<<c;
		}
		else if(d%2==0&&d>a&&d>b&&d>>c){
			cout<<d;
		}
		else 
		cout<<"not found";
    return 0;
	}
