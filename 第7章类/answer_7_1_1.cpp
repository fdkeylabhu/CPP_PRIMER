/*****************************************************
C++ Primer 5th edition P230
*****************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{

    Sales_data total;
    double price = 0.0;

    if ( cin >> total.bookNo >> total.units_sold >> price ) {  //输入第一本书
        total.revenue = total.units_sold * price;
        Sales_data cur;
        while (cin >> cur.bookNo >> cur.units_sold >> cur.revenue) {
            if ( cur.bookNo == total.bookNo ) {
                total.units_sold += cur.units_sold;
                total.revenue += cur.revenue;
            } else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;        //打印前面一本书
                total = cur;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl; //打印最后一本书
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }


    return 0;
}
