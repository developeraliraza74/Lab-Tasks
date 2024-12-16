/*
Write a program which will take foots and inches from user and convert them to total height in
inches and centimeters
INCHES_IN_FOOT=12.0
CM_IN_INCH = 2.54


Algorithm :
1. start
2. get inches
3. get foots
4. convert foots to inches => inches = inches + (foots * cm_in_inch)
5. convert inches to cm => cm = inches * cm_in_inch
6. Display Total Height in inches
7, Display total height in cm
8.. end
*/
#include<iostream>
using namespace std;
int main(){
    float inches, feets, cm;
    const float INCHES_IN_FEET = 12.0;
    const float CM_IN_INCH = 2.54;

    cout << "Enter height in feet : ";
    cin >> feets;
    cout << "Enter height in inches : ";
    cin >> inches;
    inches += (feets * INCHES_IN_FEET);
    cm = inches * CM_IN_INCH;
    cout << "Totaaaaaaaaaaaaaaaal Height in inches : " << inches;
    cout << "\n total height in cm : "<< cm;

    return 0;
}