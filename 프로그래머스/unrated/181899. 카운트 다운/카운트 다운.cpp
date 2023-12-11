#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end) {
    vector<int> answer;
    for(int s = start; s >= end; --s){
        answer.emplace_back(s);
    }
    return answer;
}