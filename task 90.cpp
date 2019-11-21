#include<iostream>
#include<cmath>
using namespace std;
    int main (){
    	double s=0;
    	for(double i=3, j=5;i<=111;j=j+2,i=i+2){
    		s=s+cos(i/j);	
			}
	
		cout<<s;
		
    	return 0;
	}
