#include<iostream>
using namespace std;

int a=15; //global variable

int main()
{
	int b=20; //local variable
	int mul;

	mul=(a*b);
	cout<<endl<<"Multiple: "<<mul;
	
	return 0;	
}