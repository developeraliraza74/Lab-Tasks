/*
    start
        input char
        assign char to int
        display int
    end
*/

#include<iostream>
using namespace std;
int main(){
    int a;
    char ch;
    cout << "Enter a character :";
    cin >> ch;
    a = ch; 
    cout << "The ascii code of " << ch << " is " << a << endl;
    return 0;
}