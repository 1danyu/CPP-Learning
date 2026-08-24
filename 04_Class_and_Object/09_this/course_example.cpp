#include <iostream>
using namespace std;

class Person
{
public:
    Person (int age)
    {
        //this指针指向被调用的成员函数所属对象
        this->age = age;
    }

    Person& PersonAddPerson(Person &p)
    {
        this->age += p.age;
        return *this;
    }

    int age;

};

void test01()
{
    Person p1(10);
    cout<<"p1的年龄是"<<p1.age<<endl;

    Person p2(20);
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//链式编程思想
    cout<<"p2的年龄是"<<p2.age<<endl;
}



int main()
{
    test01();
    return 0;
}