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


    cout << "=====================================" << endl;

    map<string, int> second_map;
    second_map["a"] = 1;
    second_map["b"] = 2;
    second_map["c"] = 3;
    for(map<string, int>::iterator second_it = second_map.begin(); second_it != second_map.end(); second_it++) {
        cout << second_it->first << "---" << second_it->second << endl;
    }

    if(second_map.find("a") != second_map.end())
        cout << "find opt: " << second_map["a"] << endl;

    if(second_map.find("aaa") != second_map.end())
        cout << "find aaa" << endl;
    else
        cout << "not find aaa" << endl;

    second_map["d"] = 4;
    cout << second_map["d"] << endl;

    cout << "count: " << second_map.size() << endl;
    second_map.erase("d");
    second_map.erase("c");
    cout << "count: " << second_map.size() << endl;
}
