#include<iostream>
using namespace std;

int main(){
	char choice;
	
	cout<<"enter the character: ";
	cin>>choice;
	switch(choice){
		 case 'a': 
		 case 'e': 
		 case 'i': 
		 case 'o': 
		 case 'u':
        	cout << choice << " is a vowel." << endl;
        	break;
		
	  	case 'b': 
		case 'c': 
		case 'd': 
		case 'f': 
		case 'g':
        case 'h': 
		case 'j': 
		case 'k': 
		case 'l': 
		case 'm':
        case 'n': 
		case 'p': 
		case 'q': 
		case 'r': 
		case 's':
        case 't': 
		case 'v': 
		case 'w': 
		case 'x': 
		case 'y': 
		case 'z':
            cout<<choice<<" is a consonant."<<endl;
            break;
            
	  default:    
                cout<<choice<<" is not an alphabetic character:" << endl;
    		
	}
return 0;	
}