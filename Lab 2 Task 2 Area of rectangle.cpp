/*
    start
        input h,l
        compute area = h * l
        display area
    end
*/

#include<iostream>
using namespace std;
int main(){
    int height, length, area;
    cout << "Enter Height : ";
    cin >> height;
    cout << "Enter Length : ";
    cin >> length;
    
    area = height * length;

    cout << "Area is " << area;
    return 0;
}