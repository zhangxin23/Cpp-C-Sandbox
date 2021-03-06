#include <iostream>
#include <algorithm>
#include <functional>

int main()
{
    std::vector<int> c {1, 2, 3, 4, 5, 6, 7 };
    int x = 5;
    c.erase(std::remove_if(c.begin(), c.end(), [x](int n) {return n < x; } ), c.end());

    std::cout << "c: ";
    for(auto i : c) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    //std::function<int (int)> func = [](int i) {return i + 4;};
    auto func = [](int i) {return i + 6; };
    std::cout << "func: " << func(6) << '\n';
}
