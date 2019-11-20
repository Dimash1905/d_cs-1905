#include<iostream>
#include<cmath>
using namespace std;
    int main(){
    	int a,b,c,max=0;
    	cin>>a>>b>>c;
    	if(a>max){
    		max=a;
			}
		if(b>a){
			max=b;
		}
		if(c>b){
			max=c;
		}
		cout<<max;
    return 0;
	}
