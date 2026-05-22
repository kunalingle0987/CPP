#include<iostream>
using namespace std;

int main(){
	int num,rev=0,rem;
	
	cout<<"Enter the  digit No: ";
	cin>>num;
	
	do{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	while(num!=0);
	
	cout<<endl<<"Reversed Number: "<<rev;
	
	return 0;
	
	
}