#include<iostream>
using namespace std;
struct Student
{
    string name;
    int roll, marks;
};

int totalStuddents = 0;

int main(){
    Student stds[100];
    int ch = 0;
    do
    {
        cout << "1. Add Student \n";
        cout << "2. Display Students \n";
        cout << "3. Update Marks \n";
        cout << "4. Exit Program\n";
        cout << "Enter your choice : ";
    } while (ch != 4);
    


    return 0;
}