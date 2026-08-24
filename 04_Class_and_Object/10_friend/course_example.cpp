#include <iostream>
using namespace std;
#include <string>

class Building
{
    friend void goodGuy(Building *building);
    
public:
    Building()
    {
        m_SitingRoom ="客厅";
        m_BedRoom = "卧室";
    }

public:
    string m_SitingRoom;
private:
    string m_BedRoom;
};

void goodGuy(Building *building)
{
    cout<<"好朋友正在访问："<<building->m_SitingRoom<<endl;
    cout<<"好朋友正在访问："<<building->m_BedRoom<<endl;
}

int main()
{
    Building p;
    goodGuy(&p);
    return 0;
}