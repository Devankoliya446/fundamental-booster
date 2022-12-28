#include<iostream>

using namespace std;

main(){
	
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	int f = 5; 
	
	b = b*b*b;
	c = c*c*c;
	d = d*d*d;
	e = e*e*e;
	f = f*f*f;
  
    int a[]={b,c,d,e,f};   
           //0 1 2 3 4
    int i;
      
    for(i=0 ; i<=4 ; i++){
    	
    	cout<<a[i]<<endl;
  	}
     
}
