#include <iostream>
using namespace std;

class Person
{
public:
    //静态成员变量也可以是在私有域下，private:
    static int m_A; 
    int m_B;
    static int m_C;

    static void func()
    {
        cout<<"静态成员函数的调用"<<endl;
    }
};

int Person::m_A = 100; //类内声明，类外必须初始化
int Person::m_C = 250; //类内声明，类外初始化

void tset01()
{
    //静态成员变量的访问方式
    //①通过对象来进行访问
    Person p1;
    p1.m_A = 200;

    Person p2;
    p2.m_A = 300;   
    
    cout<<p1.m_A<<endl; //所有对象共享一份数据，此处通过p2修改了m_A的数值，再通过p1来访问m_A的数据就是已经修改过后的了
    //②通过类名访问
    cout<<Person::m_C<<endl;
}

void test02()
{
    //通过对象来访问静态成员函数
    Person p3;
    p3.func();
    //通过类名来访问静态成员函数
    Person::func();
}
int main()
{
    //tset01();
    test02();
    return 0;
}