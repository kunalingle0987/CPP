#include<iostream>
using namespace std;

int  main()
{
	int day;
	
	cout<<"enter day code: ";
	cin>>day;
	
	switch(day)
	{
		case 1:
			cout<<endl<<"Sunday";
			break;
		case 2:
			cout<<endl<<"Monday";
			break;
		case 3:
			cout<<endl<<"Tueday";
			break;
		case 4:
			cout<<endl<<"Wednesday";
			break;
		case 5:
			cout<<endl<<"Thusday";
			break;
		case 6:
			cout<<endl<<"Friday";
			break;
		case 7:
			cout<<endl<<"Saturday";
			break;
		
		default:
			cout<<endl<<"invalid day code";
			break;
	}
	return 0;
}