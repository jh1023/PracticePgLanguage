#include <string>
#include <vector>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> score;
    
    for (int i = 0; i < dartResult.size(); ++i) {
        if (dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T') {
            int num = dartResult[i - 1] - '0';

            if (i - 2 >= 0 && dartResult[i - 2] == '1') {
                num = 10;
            }

            if (dartResult[i] == 'D') num *= num;
            else if (dartResult[i] == 'T') num *= num * num;
            score.push_back(num);
        } else if (dartResult[i] == '*' || dartResult[i] == '#') {
            if (dartResult[i] == '*') {
                score.back() *= 2;
                if (score.size() >= 2) {
                    score[score.size() - 2] *= 2;
                }
            } else if (dartResult[i] == '#') {
                score.back() *= -1;
            }
        }
    }
    for (int i = 0; i < score.size(); ++i) {
        answer += score[i];
    }
    return answer;
}