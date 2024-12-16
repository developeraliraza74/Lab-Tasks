#include<iostream>
using namespace std;
int main(){
    int h,m,s;
    cout << "Enter Hours : ";
    cin >> h;
    cout << "Enter minutes : ";
    cin >> m;
    cout << "Enter Seconds : ";
    cin >> s;

    s += (h*3600) + (m * 60);

    cout << "Total Number of seconds are : " << s << endl;

    return 0;
}