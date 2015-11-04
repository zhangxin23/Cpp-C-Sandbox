#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    string str("1234567890");

    cout << "raw str: " << str << endl;

    int start = str.find("2");
    int end = str.find("6");
    int len = end - start + 1;
    string sub = str.substr(start, len);

    cout << "substr("<< start << ", " << len << ") = " << sub << endl;

    const char *cStr = str.c_str();
    while(*cStr) {
        printf("%c ", *cStr);
        cStr++;
    }
    printf("\n");
}
