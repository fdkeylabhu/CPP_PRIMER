#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;

int main()
{

    vector<int> a = {1, 1, 1, 3, 2, 3, 2};

    std::cout << "用accumulate计算vector<int>中元素之和--------------------------" << endl;
    std::cout << accumulate(a.cbegin(), a.cend(), 0) << endl;


    //如果和的初值被设置为0，则元素值则转换成0，后再进行相加
    vector<double> b = {0.1, 0.2, 0.3};
    std::cout << accumulate(b.cbegin(), b.cend(), 0) << endl;           //b元素值转换成整型再与0相加，因此结果为0
    std::cout << accumulate(b.cbegin(), b.cend(), 0.0) << endl;         //正常的相加 0.6

    vector<string> str = {
        "ss",
        "aaa"
    };
    list<const char *> l = {
        "ss",
        "aaa",
        "bb"
    };
    cout << equal(str.cbegin(), str.cend(), l.cbegin()) << endl; //equal函数将str的每个元素与l对应位置的元素进行对比，如果相同1返回true，                                                                         
                                                                //如果不相同返回false,同时假定l的长度>=str的 长度

    vector<const char *> str2 = {
        "ss",
        "aaa"};
    cout << equal(str2.cbegin(), str2.cend(), l.cbegin()) << endl;      //两个都是c风格的字符串，还可以调用equal函数，不受影响，但必须是const限定的
    return 0;

}
