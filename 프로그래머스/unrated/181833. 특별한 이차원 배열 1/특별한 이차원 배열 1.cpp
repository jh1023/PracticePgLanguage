#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    vector<int> arr;
    
    for(int i = 0; i < n; i++){
        arr.push_back(0);
    }
    
    for(int i = 0; i < n; i++){
        answer.push_back(arr);
    }
    
    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer[i].size(); j++){
            if(i == j)
                answer[i][j] = answer[i][j] + 1;
        }
    }
    
    return answer;
}