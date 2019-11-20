#include<iostream>
#include<cmath>
using namespace std;
    int main(){
    	int a,b;
    	cin>>a>>b;
    	if(a>b){
    		cout<<"yes";
		}
		else 
		swap(a,b);
		cout<<a<<b;
    return 0;
	}
