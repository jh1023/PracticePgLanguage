#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int solution(string number) {
    int answer = 0;
    int sum = 0;

    std::vector<char> v(number.begin(), number.end());
    
    for (const char &c: v) {
        int i = c - '0'; 
        sum += i;
    }
    std::cout << sum;
    answer = sum % 9;

    return answer;
}