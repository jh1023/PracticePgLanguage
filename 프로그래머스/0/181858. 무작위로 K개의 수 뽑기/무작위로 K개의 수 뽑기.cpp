#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    unordered_map<int, int> counter;

    for (const auto& i : arr)
    {
        if (counter[i]++ == 0)
            answer.push_back(i);
    }
    answer.resize(k, -1);
    return answer;
}