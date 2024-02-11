#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(string i: strArr){
        if(i.find("ad") == std::string::npos){
            answer.push_back(i);
        }
    }
    return answer;
}