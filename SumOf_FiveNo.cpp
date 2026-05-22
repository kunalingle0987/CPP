#include<iostream>
using namespace std;

int main()
{
	int num,sum=0;
	int i=1;
	
	cout<<"Enter the Five No: ";
	
	while(i<=5)
	{
		cin>>num;
		sum+=num;
		i++;
		
	}
	
	cout<<endl<<"The sum of Five No: "<<sum;
	return 0;
	
}