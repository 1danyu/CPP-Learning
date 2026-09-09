#pragma once
#include <iostream>
using namespace std;
#include <string>

template <class Nametype, class Agetype>
class Person
{
public:
    Person(Nametype name, Agetype age);

    void showPerson();

    Nametype m_Name;
    Agetype m_Age;
};

template <class Nametype, class Agetype>
Person<Nametype, Agetype>::Person(Nametype name, Agetype age)
{
    this->m_Name = name;
    this->m_Age = age;
}
template <class Nametype, class Agetype>
void Person<Nametype, Agetype>::showPerson()
{
    cout << "姓名：" << m_Name << "年龄：" << m_Age << endl;
}