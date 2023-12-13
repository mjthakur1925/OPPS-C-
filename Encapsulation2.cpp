#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    //  Setter Functions
    void setName(string newName)
    {
        name = newName;
    }

    void setAge(int newAge)
    {
        if (newAge > 0)
        {
            age = newAge;
        }
    }

    //  Getter Functions
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    student s1;
    s1.setName("Faizan");
    s1.setAge(22);
    cout << "Student Name : " << s1.getName() << endl;
    cout << "Student Age : " << s1.getAge() << endl;

    return 0;
}