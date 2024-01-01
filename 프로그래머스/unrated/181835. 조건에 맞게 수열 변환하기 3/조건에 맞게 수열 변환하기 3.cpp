#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for (auto i : arr) {
        i = k % 2 == 0 ? i + k : i * k;
        answer.push_back(i);    
    }
    return answer;
}