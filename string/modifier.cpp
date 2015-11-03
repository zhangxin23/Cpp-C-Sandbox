#include <iostream>
#include <string>

using namespace std;

int main() {
    string str_num("1234567890");
    string str_str = "abcdefghijklmn";

    cout << "str_num = " << str_num << endl;
    cout << "str_str = " << str_str << endl;

    cout << "str_num + str_str = " << str_num + str_str << endl;

    str_num += "$";
    cout << "str_num append $: " << str_num << endl;

    str_num.push_back('#');
    cout << "str_num push_back(#): " << str_num << endl;

    str_str.insert(0, "111");
    str_str.insert(5, "222");
    cout << "str_str insert 111 222:" << str_str << endl;

    str_num.erase();
    cout << "str_num erase all: " << str_num << endl;

    str_str.erase(0, 3);
    cout << "str_str erase from 0 to 3:" << str_str << endl;
}
