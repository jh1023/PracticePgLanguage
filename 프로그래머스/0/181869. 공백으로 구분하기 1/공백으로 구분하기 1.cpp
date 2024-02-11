#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    istringstream iss(my_string);
    string buffer;
    char Delimiter = ' ';
    while (getline(iss, buffer, Delimiter)) {
        answer.push_back(buffer);
    }    
    return answer;
}