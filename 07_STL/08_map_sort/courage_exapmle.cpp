#include <iostream>
using namespace std;
#include <map>

class myCompare
{
public:
    bool operator()(int v1, int v2) const
    {
        return v1 > v2;
    }
};

void test01()
{
    map<int, int, myCompare> m1;
    m1.insert(make_pair(1, 20));
    m1.insert(make_pair(3, 70));
    m1.insert(make_pair(5, 200));
    m1.insert(make_pair(2, 140));
    m1.insert(make_pair(4, 40));

    for (map<int, int, myCompare>::iterator it = m1.begin(); it != m1.end(); it++)
    {
        cout << "key:" << (*it).first << " " << "value:" << (*it).second << endl;
    }
}
int main()
{
    test01();
    return 0;
}