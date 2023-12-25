#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    answer = {num_list.begin(), num_list.begin() + n};
    return answer;
}