#include <iostream>
#include <algorithm>

int main(void) {
    std::string str;
    std::cin >> str;
    std::sort(str.begin(), str.end(), std::greater<char>());
    std::cout << str << std::endl;
}