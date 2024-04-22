#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max = 0;
    int minus = 0;
    sort(numbers.begin(), numbers.end());
    minus = numbers[0] * numbers[1];
    max = numbers[numbers.size()-1] *numbers[numbers.size()-2];
    answer = max > minus ? max:minus;

    return answer;
}