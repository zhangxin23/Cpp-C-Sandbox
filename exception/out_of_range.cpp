#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

class myException: public out_of_range {
    public:
        myException(const string& msg): out_of_range(msg) {}
};

int main() {
    string str = "c plus plus";

    try {
        char ch1 = str[100];
        cout << ch1 << endl;
    } catch(exception e) {
        cout << "[1] out of rangd" << endl;
    }

    try {
        //throw myException("myException");
        char ch2 = str.at(100);
        cout << ch2 << endl;
    } catch(myException e) {
        cout << "Error: myException" << endl;
    } catch(out_of_range) {
        cout << "Error: out_of_range" << endl;
    } catch(exception e) {
        cout << "Error: exception" << endl;
    }
}
