#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    answer.resize(num_list.size() - (n - 1));

    copy(num_list.begin() + (n - 1), num_list.end(), answer.begin());

    return answer;
}