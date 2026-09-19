#include <iostream>
using namespace std;
#include <stack>

// 使用一个案例来熟悉stack中的各类接口
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "当前栈的大小为：" << s.size() << endl;
    // 查看栈顶中的每个元素，并且出栈，这不是遍历操作
    while(!s.empty())
    {
        cout << "当前栈顶元素为：" << s.top() << endl;
        s.pop();
    }
    cout << "当前栈的大小为：" << s.size() << endl;
    return 0;
}