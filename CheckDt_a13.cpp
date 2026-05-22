#include<iostream>
#include<cctype>
using namespace std;

int main(){
	char input;
	
	cout<<"enter the input: ";
	cin>>input;
	
	if(isalpha(input)){
		cout<<endl<<"Char: "<<input;
	}
	else if(isdigit(input)){
		cout<<endl<<"Int: "<<input;
	}
	else{
		cout<<endl<<"Special Character: "<<input;
	}
	return 0;
}