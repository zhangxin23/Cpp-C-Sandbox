#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "1234567890";
    cout << "size: " << str.size() << endl;
    cout << "length: " << str.length() << endl;
    cout << "capacity: " << str.capacity() << endl;
    cout << (str.empty() ? "empty string" : "not empty string") << endl;
}
