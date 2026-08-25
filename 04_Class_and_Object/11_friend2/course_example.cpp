#include <iostream>
using namespace std;
#include <string>

class Building;
class Goodguy
{
public:
    Goodguy();
    void visit01();//可以访问卧室
    void visit02();//不可以访问卧室

    Building * building;
};

class Building
{
    friend void Goodguy::visit01();
public:
    Building();
public:
    string m_SittingRoom;
private:
    string m_BedRoom;
};

//类内函数声明，类外实现
Goodguy::Goodguy()
{
    building = new Building;
}

Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

void Goodguy::visit01()
{
    cout<<"好朋友正在访问:"<<building->m_SittingRoom<<endl;
    cout<<"好朋友正在访问:"<<building->m_BedRoom<<endl;
}

void Goodguy::visit02()
{
    cout<<"好朋友正在访问:"<<building->m_SittingRoom<<endl;
    //cout<<"好朋友正在访问:"<<building->m_BedRoom<<endl;
}

void test01()
{
    Goodguy g;
    g.visit01();
    g.visit02();
}
int main()
{
    test01();
    return 0;
}