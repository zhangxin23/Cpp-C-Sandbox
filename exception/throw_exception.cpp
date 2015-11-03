#include <iostream>
#include <string>

using namespace std;

char get_char(const string&, int);

int main() {
    string str = "c plus plus";

    try {
        cout << get_char(str, 2) << endl;
        cout << get_char(str, 100) << endl;
    } catch(int e) {
        if(e == 1)
            cout << "index underflow" << endl;
        else if(e == 2)
            cout << "index overflow" << endl;
    }

    return 0;
}

char get_char(const string& str, int index) {
    int len = str.length();

    if(index < 0)
        throw 1;

    if(index >= len)
        throw 2;

    return str[index];
}
