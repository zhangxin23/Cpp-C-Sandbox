#include <iostream>
#include <vector>

using namespace std;

#define LENGTH 10

bool exist(vector<vector<int> > table, vector<int> path) {
    int col = table.size();
    int row = path.size();

    cout << "table.size() = " << col << endl;
    cout << "path.size() = " << row << endl;

    for(int i = 0; i < col; i++) {
        if(table[i].size() == path.size()) {

            cout << "table["  << i << "].size() == path.size()" << endl;

            int j = 0;
            for(; j < row; j++) {
                if(table[i][j] != path[j]) {
                    cout << "table[" << i << "][" << j << "]=" << table[i][j] << "   path[" << j << "]=" << path[j] << endl;
                    break;
                }
            }

            cout << "j = " << j << endl;
            if(j == row) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> vec;
    for(int i = 0; i < LENGTH; i++)
        vec.push_back(i * 10);

    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;

    cout << "capacity: " << vec.capacity() << endl;

    cout << "iterator: ";
    for(vector<int>::iterator it = vec.begin();
        it != vec.end(); it++)
        cout << *it << " ";
    cout << endl;

    vec.pop_back();
    cout << "after pop, size: " << vec.size() << endl;

    cout << "front item: " << vec.front() << endl;
    cout << "back item: " << vec.back() << endl;

    vec.insert(vec.end(), 99);
    cout << "after end insert, back item: " << vec.back() << endl;

    vec.insert(vec.begin(), 111111);
    cout << "after begin insert, front item: " << vec.front() << endl;

    vec.erase(vec.begin());
    cout << "after erase front item, front item: " << vec.front() << endl;

    vec.clear();
    cout << "after clear, size: " << vec.size() << endl;

    cout << endl;

    vector<vector<int>> table_1(10, vector<int>(10, 1));
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << table_1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "====================================" << endl;

    vector<vector<int> > table;
    vector<int> path({1, 2});
    vector<int> item1({1, 2});
    vector<int> item2({1, 3});
    vector<int> item3({2, 5, 8});
    table.push_back(item1);
    table.push_back(item2);
    table.push_back(item3);
    if(exist(table, path))
        cout << "===table exist path===" << endl;
    else
        cout << "===table not exist path===" << endl;
}
