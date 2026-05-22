#include<iostream>
using namespace std;

int main(){
	int no1=10,no2=20;
	
	cout<<endl<<"Before Swapping : "<<endl<<"no1= "<<no1<<endl<<" no2= "<<no2;
	no1=no1*no2;
	no2=no1/no2;
	no1=no1/no2;
	cout<<endl<<"After Swapping: "<<endl<<"no1= "<<no1<<endl<<" no2= "<<no2;
	
	return 0;
}