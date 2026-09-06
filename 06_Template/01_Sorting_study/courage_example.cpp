#include <iostream>
using namespace std;

template <class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void mySort(T arr[], int len)
{
    // 选择排序
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            mySwap(arr[i], arr[max]);
        }
    }
}

template <class T>
void printArr(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void test01()
{
    char charArr[] = "knhuda";
    int num = sizeof(charArr) / sizeof(char);
    mySort(charArr, num);
    printArr(charArr, num);

    int intArr[] = {3, 6, 0, 7, 4, 1};
    int num2 = sizeof(intArr) / sizeof(int);
    mySort(intArr, num2);
    printArr(intArr, num2);
}
int main()
{
    test01();
    return 0;
}