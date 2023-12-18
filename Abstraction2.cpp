#include <bits/stdc++.h>
using namespace std;

class cal
{
private:
    int x, y, z;

public:
    void add()
    {
        cout << "Enter the values of x and y : ";
        cin >> x >> y;
        z = x + y;
        cout << "The Sum is : " << z << endl;
    }

    void sub()
    {
        cout << "Enter the values of x and y: ";
        cin >> x >> y;
        z = x - y;
        cout << "Difference is : " << z << endl;
    }
};

int main()
{
    cal c1;
    c1.add();
    c1.sub();
    return 0;
}