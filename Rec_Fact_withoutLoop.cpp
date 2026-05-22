#include<iostream>
using namespace std;

fact( int n)
{
	if(n==0){
		return 1;
	}
	else{
		return n* fact(n-1);
	}
}

int main(){
	int num;
	int result;
	
	cout<<"enter the no: ";
	cin>>num;
	
	result=fact(num);
	
	cout<<endl<<"factorial of" <<num<< " ="<<result;
	return 0; 
}
	
