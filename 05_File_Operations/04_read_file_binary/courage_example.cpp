#include <iostream>
using namespace std;
#include <fstream>

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test01()
{
    ifstream ifs;
    ifs.open(R"(D:\code\01_CPP\05_File_Operations\03_write_file_binary\person.txt)",ios::out|ios::binary);
    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
        return;
    }
    Person p;
    ifs.read((char *)&p,sizeof(p));
    cout<<"姓名："<<p.m_Name<<"年龄："<<p.m_Age<<endl;
}

int main()
{
    test01();
    return 0;
}