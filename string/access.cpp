#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "1234567890";

    for(int i = 0; i < str.length(); i++)
        cout << str[i] << " ";
    cout << endl;

    for(int i = 0; i < str.size(); i++)
        cout << str.at(i) << " ";
    cout << endl;

    cout << "front: " << str.front() << endl;
    cout << "end: " << str.back() << endl;
}
