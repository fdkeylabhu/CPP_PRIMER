/**************************************************/
C++ Primer 5th edition: P345
/**************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;


struct Sales_data {
    //构造函数
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s){};
    Sales_data(const string &s, unsigned n, double p) : 
        bookNo(s), 
        units_sold(n), 
        revenue(p * n)
        {};
    Sales_data(istream &);
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};




bool compareIsbn(const Sales_data &a, const Sales_data &b)
{
    return a.isbn().size() > b.isbn().size();       //size大的放在前面
}


int main()
{

    vector<Sales_data> d;                          //构造Sales_data的数组
    Sales_data d1("1223-456-789", 10, 20);
    d.emplace_back(d1);
    Sales_data d2("231-134-24222", 2, 30);
    d.emplace_back(d2);
    Sales_data d3("111-777-423133", 2, 30);
    d.emplace_back(d3);

    sort(d.begin(), d.end(), compareIsbn);      //isbn长的排序在前

    for ( auto &data : d ) {
        cout << data.isbn() << endl;
    }

    return 0;
}
