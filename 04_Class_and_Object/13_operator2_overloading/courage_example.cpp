#include <iostream>
using namespace std;

class Person
{
    friend ostream& operator<<(ostream &cout, Person &p);
public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    } 

private:
    int m_A;
    int m_B;
};

//重载<<运算符不能用成员函数来重载，因为如果用成员函数来重载<<运算符的话，左边的操作数必须是类对象，而我们希望左边是cout对象，所以只能用全局函数来重载<<运算符
ostream& operator<<(ostream &cout, Person &p)
{
    cout<<"m_A="<<p.m_A<<", "<<"m_B="<<p.m_B<<endl;
    return cout;
}

void test01()
{
    Person p1(10,10);
    cout << p1 << endl;
}

int main()
{
    test01();
    return 0;
}