#include<iostream>
using namespace std;
int main(){
//Write a program that encourages the user to enter two fractions, and then displays their sum in
//fractional form. (You don’t need to reduce it to lowest terms.)

    int a,b,c,d;
    char slash;
    cout << "Enter first fraction : ";
    cin >> a >> slash >> b;
    cout << "Enter second fraction : ";
    cin >> c >> slash >> d;

    int neum = (a*d) + (b * c);
    int deneum = (b * d);
    cout << "The sum is " << neum << slash << deneum;
}