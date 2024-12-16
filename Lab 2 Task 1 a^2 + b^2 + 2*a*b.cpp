#include<iostream>
using namespace std;
int main(){
    int a,b,result;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    result = (a*a) + (b*b) + 2 * a * b;
    cout << "The result of a^2 + b^2 + 2ab : " << result;
}