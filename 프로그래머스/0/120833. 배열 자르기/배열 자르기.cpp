#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    std::copy(numbers.begin()+num1, numbers.begin()+num2+1, back_inserter(answer));
    return answer;
}