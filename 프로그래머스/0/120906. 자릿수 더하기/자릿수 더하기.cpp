#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string strn = to_string(n);
    for(int i=0; i<strn.length(); i++){
        answer += strn[i] - '0';
    }
    return answer;
}