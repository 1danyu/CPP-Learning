// #include <iostream>
// using namespace std;
// #include <string>
#include "person.hpp"

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