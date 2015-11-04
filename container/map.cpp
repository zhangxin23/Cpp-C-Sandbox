#include <iostream>
#include <map>

using namespace std;

int main() {
    typedef map<string, int> MapSelf;
    typedef pair<string, int> entry;

    MapSelf ms;
    ms.insert(entry("a", 1));
    ms.insert(entry("b", 2));
    ms.insert(entry("c", 3));
    ms.insert(entry("d", 4));
    ms.insert(entry("e", 5));
    pair<map<string, int>::iterator, bool> ret = ms.insert(entry("e", 55));
    if(ret.second == false) {
        cout << "key e is already existed" << endl;
    }

    cout << "content is: \n";
    for(MapSelf::iterator it = ms.begin(); it != ms.end(); it++) {
        cout << it->first << " --> " << it->second << endl;
    }

    cout << "reverse content is: \n";
    for(MapSelf::reverse_iterator rit = ms.rbegin(); rit != ms.rend(); rit++) {
        cout << rit->first << " --> " << rit->second << endl;
    }

    cout << "key(a)'s value is " << ms["a"] << endl;

    cout << "size: " << ms.size() << endl;

    MapSelf::iterator fit = ms.find("b");
    ms.erase(fit);

    for(MapSelf::iterator it = ms.begin(); it != ms.end(); it++) {
        cout << it->first << " --> " << it->second << endl;
    }
    cout << "size: " << ms.size() << endl;

    cout << "key a count is " << ms.count("a") << endl;
}
