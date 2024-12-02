#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    while(true) {
        char c = s[0];
        int c1 = 0;
        int c2 = 0;
        int i = 0;
        for(i = 0; i < s.length(); i++) {
            if(c == s[i]) c1++;
            else c2++;
            
            if(c1 == c2)break;
        }
        if(i == s.length()) {
            answer++;
            break;
        }
        s = s.substr(i + 1);
        answer++;
        if(s.length() == 0)
            break;
    }
    
    return answer;
}