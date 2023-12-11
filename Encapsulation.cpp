
// Syntex
/*class Encapsulation
{
private:
    //-----data 
public:
    Encapsulation(// args //);
    ~Encapsulation();
};

Encapsulation::Encapsulation(// args //)
{
}

Encapsulation::~Encapsulation()
{
}*/
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
    obj.setP(8);
 
    return 0;
}







