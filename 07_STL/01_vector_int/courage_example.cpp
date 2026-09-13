#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint(int val)
{
    cout << val << endl;
}
void test01()
{
    // 创建一个vector容器，数组
    vector<int> v;

    // 向容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 第一种遍历方法
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // 第二种遍历方法，使用for_each算法,利用的上面的myPrint函数回调
    for_each(v.begin(), v.end(), myPrint);
}

int main()
{
    test01();
    return 0;
}