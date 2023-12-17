#include<iostream>
using namespace std;

class KG{
    private: int p;
    private: int q;
    
    public: void setP(int input)
    {
        p= input;
        q= p/2;
    }
};

int main()
{
    KG obj;
    obj.setP(6);
    
    return 0;
}
