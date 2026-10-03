#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 一元谓词
class GreaterFive
{
public:
    bool operator()(int val) const
    {
        return val > 5;
    }
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it == v.end())
    {
        cout << "未找到大于5的数" << endl;
    }
    else
    {
        cout << "找到了大于5的数为：" << *it << endl;
    }
}

int main()
{
    test01();
    return 0;
}