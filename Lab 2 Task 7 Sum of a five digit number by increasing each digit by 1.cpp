#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a five digit number : ";
    cin >> num;

    int first = (num / 10000) % 10 + 1;
    int second = (num / 1000) % 10 + 1;
    int third = (num / 100) % 10 + 1;
    int four = (num / 10) % 10 + 1;
    int five = (num % 10) + 1;

    cout << "the numbers after addition is : " << first << second << third << four << five;
}