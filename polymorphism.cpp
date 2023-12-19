//Static polymorphism
// //In static polymorphism, the type of object is determined at compile time.

// Function overloading
// Name of function must be same but number of arguments or type of arguements must be different


// #include<bits/stdc++.h>
// using namespace std;

// class sum{
//     public:
    
//     void fun(int x)
//     {
//         cout<<"Value of x is: "<<x<<endl;
//     }

//     void fun(double x)
//     {
//         cout<<"Value of x is: "<<x<<endl;
//     }

//     void fun(int x,int y, int z)
//     {
//         cout<<"Sum of x, y and z is: "<<x+y+z<<endl;
//     }

// };

// int main()
// {
//     sum S;
//     S.fun(5);  //calling function with integer argument
//     S.fun(9.125); //calling function with double argument
//     S.fun(3,4,6); //calling function with three arguments

//     return 0;
// }



// Function Overrinding

#include<bits/stdc++.h>
using namespace std;

class base{
    public:

    virtual void show()
    {
        cout<<"Showing base class! "<<endl;
    }

    virtual void print()
    {
        cout<<"Printing base class! "<<endl;
    }

};

class derived : public base{
    public:

    void print()
    {
        cout<<"Printing derived class! "<<endl;
    }

    void show()
    {
        cout<<"Showing derived class! "<<endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;   //upcasting
    bptr->show();
    bptr->print();
    return 0;
}