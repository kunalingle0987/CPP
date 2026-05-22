#include<iostream>
using namespace std;

int main(){
	int stno,endno;
	
	cout<<"Enter the Starting number: ";
	cin>>stno;
	
	cout<<endl<<"Enter the Ending  number: ";
	cin>>endno;
	
	cout<<endl<<"Even No Between: "<<stno<<" and "<<endno<<" are: ";
	
	for(int i=stno;i<=endno;i++)
	{
		if(i%2==0){
			cout<<endl<<i;
		}
	}
	return 0;
}