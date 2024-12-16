// Write a program that takes two variables from the user and evaluates the following equation (use
// cmath):
// area = sqrt(s(s-a)(s-b)(s-c))
// s = a+b+c/2
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter a : ";
    cin >> a;   
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    int s = (a+b+c)/2;
    
    int area =  sqrt(s * (s-a) * (s-b) * (s-c));

    cout << "Area is " << area;
}