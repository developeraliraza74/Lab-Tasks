#include<iostream>
using namespace std;

class Teacher{
    public:
    // properties
    string name;
    string dept;
    int id;   
    double *salaryPtr; 
    
    // methods
    
    
    Teacher(string name,double salary){ // problem in custom shallow copy constructor
        this->name = name;
        salaryPtr = new double;
        *salaryPtr = salary;
    }

    // Teacher(string name, double salary){
    //     this->name = name;
    //     salaryPtr = new double;
    //     *salaryPtr = salary;
    // }

    Teacher(Teacher &obj){
        this->name = obj.name;
        this->dept = obj.dept;
        salaryPtr = new double;
        *salaryPtr= *obj.salaryPtr;
        
        this->id = obj.id;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << " ID : " << id << endl;
        cout << "Dept : " << dept << endl;
        cout << "Salary : " << *salaryPtr << endl;
    }
    // void setSalary(double salary){ // setter function
    //     this->salary = salary;
    // }
    
    // void getSalary(){ //getter function
    //     cout << "Salary is : " << salary;
    // }
   
    private:
    

   
};

int main(){

// problem in shallow copy
    Teacher t1("Jafir Hussain",  5000);
    // jafir.name = "Jafir Hussain";
    // jafir.dept = "CS";
    // jafir.id = 1;
    // jafir.setSalary(5000);

    t1.getInfo();

    Teacher t2("Asghar Hussain", 9000);


    Teacher t3(t1);
    t3.getInfo();
    t3.name = "Ali";
    *(t3.salaryPtr) = 900;
    t3.getInfo();
    t1.getInfo();
    return 0;
}