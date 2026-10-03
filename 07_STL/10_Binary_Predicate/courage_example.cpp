#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class MySort
{
public:
    bool operator()(int val1, int val2)
    {
        return val1 > val2;
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

    sort(v.begin(), v.end(), MySort());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    test01();
    return 0;
}