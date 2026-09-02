#include <iostream>
using namespace std;
//利用纯虚函数来写制作饮品的流程
class Abstract
{
public:
    //煮水
    virtual void Boil () = 0;
    //冲泡
    virtual void Brew () = 0;
    //倒入杯中
    virtual void PourInCup () = 0;
    //加入辅料
    virtual void PutSomething () = 0;
    //制作饮品的流程
    void doDrinking()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

//子函数重写父类的纯虚函数
class Coffee: public Abstract
{
public:
    void Boil ()
    {
        cout<<"煮矿泉水"<<endl;
    }
    void Brew () 
    {
        cout<<"冲泡咖啡粉"<<endl;
    }
    void PourInCup ()
    {
        cout<<"倒入咖啡杯"<<endl;
    }
    void PutSomething ()
    {
        cout<<"加入牛奶"<<endl;
    }
};

void MakeDrinking(Abstract * abs)
{
    abs->doDrinking();
    delete abs;
}

void test01()
{
    MakeDrinking(new Coffee);
}

int main()
{
    test01();
    return 0;
}