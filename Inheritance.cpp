#include <iostream>
using namespace std;

// Base class
class Parent
{
public:
	int p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent //class Child extends Parent
{
public:
	int c;
};

int main()
{
	Child obj1;
		
	// An object of class child has all data members
	// and member functions of class parent
	obj1.c = 7;
	obj1.p = 91;
	cout << "Child id is: " << obj1.c << '\n';
	cout << "Parent id is: " << obj1.p << '\n';
		
	return 0;
}

