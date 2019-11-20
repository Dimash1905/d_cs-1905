#include<iostream>
#include<cmath>
using namespace std;
    int main(){
    	int a,b,c,min=1000;
    	cin>>a>>b>>c;
    	if(a<min){
    		min=a;
			}
		if(b<a){
			min=b;
		}
		if(c<b){
			min=c;
		}
		if(a!=min){
			cout<<a<<endl;
		}
		if(b!=min){
			cout<<b<<endl;
		}
		if(c!=min){
			cout<<c;
		}
    return 0;
	}
