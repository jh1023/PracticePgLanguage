#include <vector>
#include <algorithm>

using namespace std;

int ranking(int score) {
    if(7 - score == 7) return 6;
    else return 7 - score;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero = 0, same = 0;
    
    sort(lottos.begin(), lottos.end());
    for(int i = 0; i < lottos.size(); ++i) {
        if(lottos[i] == 0) zero++;
    }
    for(int i = zero; i < lottos.size(); ++i) {
        for(int j = 0; j < win_nums.size(); ++j) {
            if(lottos[i] == win_nums[j]) {
                same++;
                break;
            }
        }
    }
    answer.push_back(ranking(same + zero));
    answer.push_back(ranking(same));
    return answer;
}