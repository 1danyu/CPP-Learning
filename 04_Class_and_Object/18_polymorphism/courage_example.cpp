#include <iostream>
using namespace std;
//利用多态实现计算器类
class Calculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
public:
    int m_Num1;
    int m_Num2;
};

//加法
class AddCalculator: public Calculator
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

//减法
class SubCalculator: public Calculator
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};

//测试代码
void test01()
{
    Calculator *abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 20;
    cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    //手动new了一个堆区空间之后需要手动释放
    delete abc;
    Calculator *abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 20;
    cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    //手动new了一个堆区空间之后需要手动释放
    delete abc;
}

int main()
{
    test01();
    return 0;
}