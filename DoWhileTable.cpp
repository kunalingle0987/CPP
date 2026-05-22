#include<iostream>
using namespace std;

int main(){
	int num;
	int i=1;
	
	cout<<"Enter the no: ";
	cin>>num;
	
	do{
		cout<<endl<<num<<"X"<<i<<"="<<num*i;
		i++;
	}
	while(i<=10);
	
	return 0;
}