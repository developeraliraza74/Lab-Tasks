#include<iostream>
using namespace std;

class parent{
    public:
    string name;
    int age;


    parent(string name, int age){ // constructor allocate
        // cout << "I'm parent constructor\n";
        this->name = name;
        this->age = age;
    }

    ~parent(){
        cout << "I'm parent destructor \n";
    }
};

class child : public parent{
    public:
    string fatherName;

    void getInfo(){
        cout << " \nName : " << name;
        cout << " \nage : " << age;
        cout << " \nFather Name : " << fatherName <<endl;
    }

    child(string name, int age, string fatherName) : parent(name, age){
        this->fatherName = fatherName;
    }

    ~child(){ // destructor deallocate
        cout << "I'm child destructor \n";
    }
};

int main(){
    child ahmad("Ahmad", 5, "Raees Ahmad");
    ahmad.getInfo();

}