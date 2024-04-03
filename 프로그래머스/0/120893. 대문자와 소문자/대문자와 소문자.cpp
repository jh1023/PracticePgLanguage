#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (char& ch : my_string) {
        if ('A' <= ch && 'Z' >= ch) {
            ch = ch + 32;
        }else{
            ch = ch - 32;
        }
        answer +=ch;
    }
    return answer;
}