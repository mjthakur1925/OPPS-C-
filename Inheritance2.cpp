#include<bits/stdc++.h>
using namespace std;

class vehicle{
    public:
    int wheels;
    string colour;

    void start()
    {
        cout<<"Vehicle Started! "<<endl;
    }

    void stop()
    {
        cout<<"Vehicle Stopped! "<<endl;
    }

};

class car : public vehicle{
    public:
    string brand;

    void drive()
    {
        cout<<"Driving the car! "<<endl;
    }
};

int main()
{
    car c1;
    c1.brand = "Toyota";
    c1.colour = "White";
    c1.wheels = 4;

    cout<<"Name: "<<c1.brand<<endl;
    cout<<"Colour: "<<c1.colour<<endl;
    cout<<"No. of wheels: "<<c1.wheels<<endl;

    c1.start();
    c1.drive();
    c1.stop();

    return 0;
}