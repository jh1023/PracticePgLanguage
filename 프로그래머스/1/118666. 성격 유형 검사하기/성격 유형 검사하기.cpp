#include <string>
#include <vector>
#include <map>

using namespace std;

int score[8] = {0, 3, 2, 1, 0, 1, 2, 3};

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map <char, int> survElm;
    
    for(int i = 0; i < survey.size(); i++ ) {
      survElm[survey[i][choices[i]/4]] += score[choices[i]];
    }
    answer += survElm['R'] >= survElm['T'] ? "R" : "T";
    answer += survElm['C'] >= survElm['F'] ? "C" : "F";
    answer += survElm['J'] >= survElm['M'] ? "J" : "M";
    answer += survElm['A'] >= survElm['N'] ? "A" : "N";
    
    return answer;
}