//
// Created by zhangxin on 15-12-22.
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> int_set;
    int_set.insert(1);
    int_set.insert(2);
    int_set.insert(3);
    for(set<int>::iterator it = int_set.begin(); it != int_set.end(); it++) {
        cout << *it << endl;
    }

    if(int_set.find(1) != int_set.end())
        cout << "contains 1" << endl;
    else
        cout << "not contains 1" << endl;

    if(int_set.find(10) != int_set.end())
        cout << "contains 10" << endl;
    else
        cout << "not contains 10" << endl;

    int_set.erase(2);
    for(set<int>::iterator it = int_set.begin(); it != int_set.end(); it++) {
        cout << *it << endl;
    }

    cout << "int_set size: " << int_set.size() << endl;
    string rtn = int_set.count(1) > 0 ? "yes" : "no";
    cout << "contains 1? " << rtn << endl;
}