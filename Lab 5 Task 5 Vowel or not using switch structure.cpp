#include<iostream>
using namespace std;
int main(){
	char ch;
	cout << "Enter a character : ";
	cin >> ch;
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout << ch << " is vowel ";
			break;
		default: 
			cout << ch << " is consonent";
			
	}
}