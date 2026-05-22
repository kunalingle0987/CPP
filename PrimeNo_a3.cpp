#include<iostream>
using namespace std;

int main(){
	int no,i,flag=1;
	
		cout<<endl<<"Enter the num: ";
		cin>>no;
	if(no==1){
		flag=1;
	}
	else{
		for(i=2;i<=no-1;i++){
			if(no%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1){
		cout<<endl<<"the no is prime";
	}
	else{
		cout<<endl<<"the no is composite";
	}
	return 0;
}