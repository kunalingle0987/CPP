#include<iostream>
using namespace std;

int main()
{
		float num1,num2,sum=0,pro,diff;
		float quo;
		
		cout<<endl<<"Enter the 1st no: ";
		cin>>num1;
		cout<<endl<<"Enter the 2nd no: ";
		cin>>num2;
		
		sum=num1+num2;
		cout<<endl<<"Sum of two no: "<<sum;
		
		diff=num1-num2;
		cout<<endl<<"diffrance of two no: "<<diff;
		
		pro=num1*num2;
		cout<<endl<<"product of two no: "<<pro;
		
		quo=num1/num2;
		cout<<endl<<"quoient of two no: "<<quo;
		
		
		return 0;
}