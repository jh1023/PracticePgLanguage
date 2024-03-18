#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string str = to_string(age);
    for(int i=0; i<str.length(); i++){
        answer += char(str[i] - '0' + 97);
    }
    return answer;
}