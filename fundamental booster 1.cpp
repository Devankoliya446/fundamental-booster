#include<iostream>

using namespace std;

main (){
	
	char a;
	
	cout<<"Enter text : ";
	cin>>a;
	
	if(isdigit(a)){
		cout<<"this character is numeric";
	}
	
	else{
		cout<<"this character is not numeric";
	}
	
	
}
