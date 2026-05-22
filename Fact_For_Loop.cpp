#include<iostream>
using namespace std;

int main(){
	int num,fact=1;
	int i;
	
	cout<<endl<<" Enter the No: ";
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		
	}
	cout<<endl<<" The Factorial of "<<num<<" is= "<<fact;
	
	return 0;
	
}