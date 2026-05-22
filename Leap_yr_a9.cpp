#include<iostream>
using namespace std;

int main(){
	int year;
	
	cout<<"enter the year: ";
	cin>>year;
	
	if(year%4==0)
	{
		cout<<endl<<"The Year is Leap";
	}
	else{
		cout<<endl<<"The Year is Not Leap";
	}
	return 0;
}