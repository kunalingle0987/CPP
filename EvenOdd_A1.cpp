#include<iostream>
using namespace std;
int main(){
	int num;
	
	cout<<"Enter the no: ";
	cin>>num;
	
	if(num%2==0){
		cout<<endl<<"Even Number";
	}
	else{
		cout<<endl<<"Odd Number";
	}
	return 0;
}