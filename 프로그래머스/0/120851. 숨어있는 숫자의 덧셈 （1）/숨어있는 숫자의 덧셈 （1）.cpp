#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (int i = 0; i < my_string.size(); i++) {
        if ('A' <= my_string[i] && my_string[i] <= 'Z') {
        }else if('a' <= my_string[i] && my_string[i] <= 'z'){            
        }else{
            answer += my_string[i] - '0';
        }
    }
    return answer;
}