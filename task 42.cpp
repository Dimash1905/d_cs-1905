#include<iostream>
#include<cmath>
using namespace std;
    int main(){
    	int a;
    	cin>>a;
    	if(a>=2&&a<=5){
    		cout<<a+10;
			}
			else if(a>7&&a<40){
				cout<<a-100;
			}
			else if(a<0&&a>3000){
				cout<<a*3;
			}
			else 
			cout<<a-a;
    return 0;
	}
