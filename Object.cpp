#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool gender;
};

int main()
{
    Student yash;
    yash.name = "Yash";
    yash.age = 20;
    yash.gender = 1;
    
    Student kanika;
    kanika.name = "Kanika";
    kanika.age = 19;
    kanika.gender = 0;
    
    return 0;
}

