#include <iostream>
using namespace std;
#include <string>

template <class Nametype, class Agetype>
class Person
{
public:
    Person(Nametype name, Agetype age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPerson()
    {
        cout << "姓名：" << m_Name << "年龄：" << m_Age << endl;
    }
    Nametype m_Name;
    Agetype m_Age;
};

void test01()
{
    Person<string, int> p("张三", 18);
    p.showPerson();
}

int main()
{
    test01();
    return 0;
}