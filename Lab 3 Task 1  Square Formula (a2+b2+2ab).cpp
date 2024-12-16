// Write a program that takes two variables from the user and evaluates the following equation (use
// cmath):
// x=a2+b2+2ab.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    int result = pow(a,2) + pow(b,2) + 2 * a * b; 
    cout << "The result of a2 + b2 + 2ab is = " << result;
}