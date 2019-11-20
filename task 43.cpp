#include<iostream>
#include<cmath>
using namespace std;
    int main(){
    	int a;
    	cin>>a;
    	if(a<12&&a>8){
    		cout<<"Autumn";
			}
			if(a==1||a==12||a==2){
				cout<<"Winter";
			}
			if(a<6&&a>2){
				cout<<"spring";
			}
			if(a<9&&a>5)
			cout<<"summer";
    return 0;
	}
