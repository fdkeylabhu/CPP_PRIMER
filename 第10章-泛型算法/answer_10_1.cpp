#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;

int main()
{

    //测试count函数
    vector<int> a = {1, 1, 1, 3, 2, 3, 2};
    std::cout << count(a.cbegin(), a.cend(), 3) << std::endl;

    list<string> b;
    string s;
    while ( cin >> s ) {
        b.push_back(s);
    }
    
    std::cout << count(b.cbegin(), b.cend(), "sss") << std::endl;
    return 0;

}
