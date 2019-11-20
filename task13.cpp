
#include<iostream>
#include<cmath>
using namespace std;
    int main (){
    	double a=0.1,b=0.2;
    	double x=1;
    	//cout<<pow((x*x+b),1/5.0);
		cout<<pow((x*x+b),1/5.0)-pow(b,2)*pow(sin(x+a),3)/x;
    	return 0;
	}
