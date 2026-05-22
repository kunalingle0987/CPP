#include<iostream>
using namespace std;

int main(){
	int no1,no2,no3;
	
	cout<<endl<<"Enter The 1 no: ";
	cin>>no1;
	cout<<endl<<"Enter The 2 no: ";
	cin>>no2;
	cout<<endl<<"Enter The 3 no: ";
	cin>>no3;
	
	if(no1>no2 && no1>no3)
	{
		cout<<endl<<"Number First is greater: "<<no1;
	}
	else if(no2>no1 && no2>no3){
		cout<<endl<<"The Number Second is Greater: "<<no2;
	}
	else{
		cout<<endl<<"The Number Third is greater: "<<no3;
	}
	return 0;
	
}