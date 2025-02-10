#include <string>
#include <vector>

using namespace std;

bool isSkip(char c, string skip) {
    for(int i=0;i<skip.size();i++)
        if (c == skip[i]) return true;
    return false;
}

string solution(string s, string skip, int index) {
    string answer = "";
    for(int i=0;i<s.size();i++) {
        char c = s[i];
        for(int j=0;j<index;) {
            c += 1;
            // 'z'를 넘어가면 'a'로 바꿈
            if (c == 'z' + 1) c = 'a';
            // skip에 포함되지 않는 문자이면 카운트
            if(!isSkip(c, skip)) 
                j++;
        }
        answer.push_back(c);
    }
    return answer;
}