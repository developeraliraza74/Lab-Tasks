// A theater owner agrees to donate a portion of gross ticket sales to a charity
// The program will prompt the user to:
// Inputs: movie name, adult and child ticket price, adult and child tickets sold, and percentage of the
// gross to be donated
#include<iostream>
using namespace std;
int main(){
    string name;
    int adultTicketPrice, childTicketPrice, adultSold, childSold, total;
    double percentage;
    cout << "Enter movie name : ";
    cin >> name;
    cout << "Enter child tickets sold : ";
    cin >> childSold;
    cout << "Enter child ticket price : ";
    cin >> childTicketPrice;
    cout << "Enter adult ticket sold : ";
    cin >> adultSold;
    cout << "Enter adult ticket price : ";
    cin >> adultTicketPrice;
    cout << "Enter percentage : ";
    cin >> percentage;
    total = (adultSold * adultTicketPrice) + (childSold * childTicketPrice);    

    int donated = (total * percentage) / 100.0;
    cout << "Your donation amount is : " << donated;
     
}