#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> str;
    istringstream sstr(my_string);
    string buffer;
    while (getline(sstr, buffer, ' ')) {
        str.push_back(buffer);
    }
    answer += stoi(str[0]);
    for (int i = 1; i < str.size();i++) {
        if (str[i] == "+") {
            answer += stoi(str[i + 1]);
        }
        else if (str[i] == "-") {
            answer -= stoi(str[i + 1]);
        }
    }
    return answer;
}