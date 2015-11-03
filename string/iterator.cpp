#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("1234567890");

    string::iterator it = str.begin();
    while(it != str.end()) {
        cout << *it++ << " ";
    }
    cout << endl;

    string::reverse_iterator rit = str.rbegin();
    while(rit != str.rend())
        cout << *rit++ << " ";
    cout << endl;

    string::const_iterator cit = str.cbegin();
    while(cit != str.cend())
        cout << *cit++ << " ";
    cout << endl;

    string::const_reverse_iterator crit = str.crbegin();
    while(crit != str.crend())
        cout << *crit++ << " ";
    cout << endl;
}
