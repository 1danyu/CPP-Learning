#pragma once
#include <iostream>
using namespace std;

template <class T>
class MyArray
{
public:
    // 构造函数
    MyArray(int capacity)
    {
        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity];
    }

    // 拷贝构造函数
    MyArray(const MyArray &arr)
    {
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        // 深拷贝
        this->pAddress = new T[arr.m_Capacity];
        for (int i = 0; i < arr.m_Capacity; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    // 需要将赋值运算符重载才能做到上面深拷贝的赋值
    MyArray &operator=(const MyArray &arr)
    {
        // 先判断原来堆区是否有数据，如果有，先释放
        if (arr.pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];
        for(int i = 0;i < this->m_Capacity;i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }
    // 尾插法
    void pushBack(const T &val) // 这个传参的方式一直搞不清楚，需要再花时间
    {
        if (this->m_Capacity == this->m_Size)
        {
            return;
        }
        this->pAddress[this->m_Size] = val;
        this->m_Size++; // 不要忘了跟新数组的大小
    }
    // 尾删法
    void Pop_Back()
    {
        // 访问用户访问不到最后一个元素，即为尾删，逻辑删除
        if (this->m_Size == 0)
        {
            return;
        }
        this->m_Size--;
    }
    // 通过下标访问数组中的元素
    T &operator[](int index)
    {
        return this->pAddress[index];
    }
    // 返回数组的容量
    int getCapacity()
    {
        return this->m_Capacity;
    }
    // 返回数组的大小
    int getSize()
    {
        return this->m_Size;
    }
    // 析构函数
    ~MyArray()
    {
        if (this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    }

private:
    T *pAddress;    // 指针指向堆区开辟的真实数组
    int m_Capacity; // 数组的容量
    int m_Size;     // 数组的大小
};
