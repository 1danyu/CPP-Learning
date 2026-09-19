#include <iostream>
using namespace std;
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
/*案例描述：有五名选手：ABCDE，10个评委分别对每一名选手打分，去掉最高分，去掉评委中最低分，取平均分
步骤：
1.创建5名选手，放在vector中
2.遍历vector容器，取出每一名选手，执行for循环，可以把10个评委打分存到deque容器中
3.sort算法对deque容器中分数排序，去除最高和最低分
4.deque容器遍历一遍，累加总分
5.获取平均分
*/

// 创建5名选手
class Person
{
public:
    // 构造函数
    Person(string name, int score)
    {
        this->m_name = name;
        this->m_score = score;
    }
    string m_name;
    int m_score;
};
// 创建5个对象并且给姓名和平均分赋初值
void creatPerson(vector<Person> &v)
{

    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        string name;
        name += nameSeed[i];

        int score = 0;

        Person p(name, score);

        v.push_back(p);
    }
}

void printPerson(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "姓名：" << (*it).m_name << " " << "平均分：" << (*it).m_score << " ";
        cout << endl;
    }
}

void getScore(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        deque<int> d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60;
            d.push_back(score);
        }
        sort(d.begin(), d.end());
        // 删去最高分和最低分
        d.pop_front();
        d.pop_back();

        // 算出总分
        int sum =0;
        for (int i = 0; i < d.size(); i++)
        {            
            sum += d[i];
        }

        int avg = sum / d.size();

        (*it).m_score = avg;
    }
}

int main()
{
    //给一个真随机种子
    srand((unsigned int)time(NULL));
    vector<Person> v;
    creatPerson(v);
    getScore(v);
    printPerson(v);
    return 0;
}