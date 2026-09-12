#include <iostream>
using namespace std;
#include "MyArray.hpp"

void PrintArrayInt(MyArray<int> &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << arr[i] << endl;
    }
}

void test01()
{
    MyArray<int> arr1(5);
    // 利用尾插法给数组赋值
    for (int i = 0; i < 5; i++)
    {
        arr1.pushBack(i);
    }
    cout << "arr1初始数组为：" << endl;
    PrintArrayInt(arr1);

    MyArray<int> arr2(arr1);
    cout << "arr2初始数组为：" << endl;
    PrintArrayInt(arr2);
    cout << "arr2的容量为" << arr2.getCapacity() << endl;
    cout << "arr2的大小为" << arr2.getSize() << endl;

    // 验证尾删法
    arr1.Pop_Back();
    cout << "arr1尾删后数组为：" << endl;
    PrintArrayInt(arr1);
    cout << "arr1的容量为" << arr1.getCapacity() << endl;
    cout << "arr1的大小为" << arr1.getSize() << endl;
}

class Person
{
public:
    Person() {};
    Person(string name, int age)
    {
        this->m_name = name;
        this->m_Age = age;
    }

    string m_name;
    int m_Age;
};

void PrintArrayPerson(MyArray<Person> &arr)
{
    for(int i = 0;i<arr.getSize();i++)
    {
        cout<<"姓名："<<arr[i].m_name<<"  "<<"年龄："<<arr[i].m_Age<<endl;
    }
}

void test02()
{
    MyArray<Person> arr3(10);
    Person p1("孙悟空", 10);
    Person p2("猪八戒", 15);
    Person p3("唐僧", 23);

    //利用尾插法
    arr3.pushBack(p1);
    arr3.pushBack(p2);
    arr3.pushBack(p3);

    PrintArrayPerson(arr3);
}
int main()
{
    //test01();
    test02();
    return 0;
}