#include<iostream>
using namespace std;

int main(){
	int num1,num2,avg,sum=0;
	
	cout<<"Enter the 1st no: ";
	cin>>num1;
	cout<<"Enter the 2nd no: ";
	cin>>num2;
	
	sum=num1+num2;
	avg=sum/2;
	cout<<endl<<"Sum: "<<sum;
	cout<<endl<<"avg: "<<avg;
	
	return 0;
}