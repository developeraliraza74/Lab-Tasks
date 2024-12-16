#include<iostream>
using namespace std;
int main(){
	int a,b;
	char op;
	cout << "Enter first integar : ";
	cin >> a >> op >> b;

	if(op == '+'){
		cout << a << " + " << b << " = " << a+b;
	}
	else if(op == '-'){
		cout << a << " - " << b << " = " << a-b;
	}
	else if(op == '*'){
		cout << a << " * " << b << " = " << a*b;
	}
	else if(op == '/'){
		cout << a << " / " << b << " = " << (float)a/b;
	}
	else{
	}
	cout << "\nThank You";
	return 0;
}