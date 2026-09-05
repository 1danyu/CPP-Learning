#include <iostream>
using namespace std;
#include <fstream>

void test01()
{
    ifstream ifs;
    ifs.open(R"(D:\code\01_CPP\05_File_Operations\01_write_file\text.txt)",ios::in);
    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
        return;
    }

    char buf[1024] = {0};
    while (ifs>>buf)
    {
        cout<<buf<<endl;
    }

    ifs.close();
}

int main()
{
    test01();
    return 0;
}