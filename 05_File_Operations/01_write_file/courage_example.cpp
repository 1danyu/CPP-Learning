#include <iostream>
using namespace std;
#include <fstream>

void test01()
{
    ofstream ofs;
    ofs.open("text.txt",ios::out);
    ofs<<"姓名：张三"<<endl;
    ofs<<"年龄：20"<<endl;
    ofs.close();
}

int main()
{
    test01();
    return 0;
}