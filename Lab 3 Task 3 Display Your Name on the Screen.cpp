// A C++ program that takes input for the full name, father's name, city, and university name and
// displays it on the screen.
#include<iostream>
using namespace std;
int main(){
    string name, fname, city, uni;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your father name : ";
    cin >> fname;
    cout << "Enter your uni : ";
    cin >> uni;
    cout << "Enter your city : ";
    cin >> city;

    cout << "Your name is " << name << endl;
    cout << "Your father nane is " << fname << endl;
    cout << "Your city is " << city << endl;
    cout << "Your uni is " << uni << endl;

}