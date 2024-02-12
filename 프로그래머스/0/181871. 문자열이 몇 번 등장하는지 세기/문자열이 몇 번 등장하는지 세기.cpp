#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;

    int pos = 0;    
    while(true) {
        pos = myString.find(pat,pos);
        if(pos == string::npos) {
            break;
        }

        answer++;
        pos++;
    }

    return answer;
}