#include<iostream>
using namespace std;
int main(){
	int obtained, total;
	int choice;
	char grade;
	cout << "Enter Obtained Marks : ";
	cin >> obtained;
	cout << "Enter Total Marks : ";
	cin >> total;
	cout << "Enter 1 for Percentage \n Enter 2 for Grade : ";
	cin >> choice;
	switch(choice){
		case 1:
			cout << "Percentage is " << (obtained / 100.0) * total;
			break;
		case 2:
			{
				if(obtained > 90){
					grade = 'A';
				}
				else if(obtained >= 80){
					grade = 'B';
				}
				else if(obtained >= 70){
					grade = 'C';
				}
				else if(obtained >= 60){
					grade = 'D';
				}
				else if(obtained >= 50){
					grade = 'E';
				}
				else{
					grade = 'F';
				}
				cout << "Your grade is " << grade;
			 } 
	}
}