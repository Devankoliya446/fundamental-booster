#include<iostream>

using namespace std;

main(){
	
	char c;
	
	cout<<"Enter alphabet : ";
	cin>>c;
	
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
		cout<<"This is vowel";	
	}
	
	else{
		cout<<"This is consonant";
	}
	
}
