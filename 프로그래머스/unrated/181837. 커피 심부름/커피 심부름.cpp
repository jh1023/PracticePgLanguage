#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(string od: order) {
        if (od.find("cafelatte") != std::string::npos){
            answer += 5000;
        }else{
            answer +=4500;
        }        
    }
    
    return answer;
}