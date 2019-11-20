#include<iostream>
#include<cmath>
using namespace std;
    int main(){
    	int a,b,c;
    	cin>>a>>b>>c;
    	if(a%5==0 && b%5==0 && c%5!=0){
    		cout<<a+b;
    	}
    	 else if(a%5==0 && b%5==0 && c%5==0){
    		cout<<a+b+c;
			}
			
    	else if(a%5!=0 && b%5==0 && c%5==0){
    		cout<<b+c;
    	}
    	
    	else if(a%5==0 && b%5!=0 && c%5==0){
    		cout<<a+b+c;
    	}
    	
    	else if(a%5!=0 && b%5!=0 && c%5==0){
    		cout<<c;
		}
		
    	else if(a%5==0 && b%5!=0 && c%5!=0){
    		cout<<a;
    	}
    	
    	else if(a%5!=0 && b%5==0 && c%10!=5){
    		cout<<a;
    	}
    	else
    	cout<<"error";
			
    return 0;
	}
