#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int val = money /5500;
    int left = money %5500;
    answer.push_back(val);
    answer.push_back(left);
    return answer;
}