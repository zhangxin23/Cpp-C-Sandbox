#include <iostream>
#include <vector>

using namespace std;

#define LENGTH 10

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

    vector<vector<int>> table(10, vector<int>(10, 1));
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
