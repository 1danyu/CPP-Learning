#include <iostream>
using namespace std;
#include <map>

void test01()
{
    map<int,int>m1;
    //map容器的插入方式很重要
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(3,30));
    m1.insert(pair<int,int>(4,40));
    m1.insert(pair<int,int>(2,20));

    for(map<int,int>::iterator it = m1.begin();it != m1.end();it++)
    {
        cout<<"key:"<<(*it).first<<" "<<"value:"<<it->second<<endl;
    }
}
int main()
{
    test01();
    return 0;
}