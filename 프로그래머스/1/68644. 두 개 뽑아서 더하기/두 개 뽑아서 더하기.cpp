#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    bool visit[10001];
    for(int i = 0; i < numbers.size() - 1; i++)
        for(int j = i + 1; j < numbers.size(); j++) {
            if(visit[numbers[i] + numbers[j]] == false) {
                answer.push_back(numbers[i] + numbers[j]);
                visit[numbers[i] + numbers[j]] = true;
            }
        }
    sort(answer.begin(), answer.end());
    
    return answer;
}