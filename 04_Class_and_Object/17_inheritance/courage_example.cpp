#include <iostream>
using namespace std;

class Base
{
public:
    int m_A = 10;
protected:
    int m_B = 20;
private:
    int m_C = 30;
};

class Son: private Base
{
public:
    int m_D = 40;
};

int main()
{
    Son s;
    cout<<"size of Son："<<sizeof(s)<<endl;
    return 0;
}