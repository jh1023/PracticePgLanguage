#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> count(N + 2);
    vector<float> failure(N + 1);
    vector<int> answer;
    
    for (int i = 0; i < stages.size(); ++i) {
        count[stages[i]]++;
    }
    int total = stages.size();
    for (int i = 1; i <= N; ++i) {
        if (total != 0) {
            failure[i] = (float)count[i] / total;
            total -= count[i];
        }
        else failure[i] = 0;
    }
    
    vector<pair<int, float>> pairs;
    for (int i = 1; i <= N; ++i) {
        pairs.push_back({i, failure[i]});
    }
    sort(pairs.begin(), pairs.end(), [](pair<int, float> a, pair<int, float> b) {
        if(a.second == b.second) return a.first < b.first;
        else return a.second > b.second;
    });
    for (int i = 0; i < pairs.size(); ++i) {
        answer.push_back(pairs[i].first);
    }
    return answer;
}