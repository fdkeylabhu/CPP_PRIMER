
/***************************************************
C++ Primer 5th edition : P345
***************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;


bool more5char(const string &s)
{
    return s.size() >= 5 ? true : false;
}

int main()
{

    vector<string> words;
    words.emplace_back("love");
    words.emplace_back("enusathetic");
    words.emplace_back("fun");
    words.emplace_back("hello");

    auto iter = partition(words.begin(), words.end(), more5char);

    for (auto &data : words) {
        cout << data << endl;
    }

    return 0;
}
