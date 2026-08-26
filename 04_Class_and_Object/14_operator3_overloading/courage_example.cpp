#include <iostream>
using namespace std;

class MyInt
{
    friend ostream& operator<<(ostream& cout, const MyInt &p);//const MyInt &p既避免复制对象，又能够接收普通对象和临时对象,在C++上很常用
public:
    MyInt(int a)
    {
        m_A = a;
    }
    //前置++运算符重载
    //返回引用的原因是为了写链式编程，有引用是直接操作同一个数据，如果不加引用则是生成一个新的副本
    MyInt& operator++()//++重载运算符，由于下面输出部分是++p1,不需要输出什么
    {
        m_A++;
        return *this; //返回的是自身，即当前数据类型，不要和左移运算符搞混了
    }
    //后置++运算符重载，后置++是返回的值，而不是引用
    MyInt operator++(int)//这里的int是占位参数，可以用于区分前置和后置的占位参数，而且！只认int
    {
        MyInt temp = *this;
        m_A++;//成员函数中可以直接引用
        return temp;
    }
    //练习下前置--运算符重载
    MyInt& operator--()
    {
        m_A--;
        return *this;
    }

    //练习下后置--运算符重载
    MyInt operator--(int)
    {
        MyInt temp = *this;
        m_A--;
        return temp;
    }

private:
    int m_A;
};
//用到左移运算符重载，左移运算符只能写全局函数
ostream& operator<<(ostream& cout, const MyInt &p)
{
    cout<<p.m_A<<endl;
    return cout;
}

void test01()
{
    MyInt p1(10);
    cout<<"前置递增的结果是："<<++p1<<endl;

    MyInt p2(10);
    cout<<"后置递增的结果是："<<p2++<<endl;
    cout<<"后置递增的结果是："<<p2<<endl;

    MyInt p3(30);
    cout<<"前置递减的结果是："<<--p3<<endl;
    
    MyInt p4(40);
    cout<<"后置递减的结果是"<<p4--<<endl;
    cout<<"后置递减的结果是"<<p4<<endl;
}

int main()
{
    test01();
    return 0;
}