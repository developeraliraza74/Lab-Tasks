#include<iostream>
using namespace std;
int main(){
	int num1, num2, num3;
	cout << "Enter three (_integare separate using space_)";
	cin >> num1 >> num2 >> num3;
	if(num1 > num2){
		if(num1 > num3){
			cout << num1 << " is greatest";
		}
		else {
			cout << num3 << " is greatest";
		}
	}
	else if(num2 > num1){
		if(num2 > num3){
			cout << num2 << " is greatest";
		}
		else{
			cout << num3 << " is greatest";
		}
	}
	else{
		cout << "No number is greater";
	}
	return 0;
}