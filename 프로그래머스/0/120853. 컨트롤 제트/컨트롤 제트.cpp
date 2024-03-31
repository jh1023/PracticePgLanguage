#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <stack>

using namespace std;

stack<int> stc;

int solution(string s) {
    int answer = 0;
    
    stringstream ss(s);
    string str;
    
    while(ss >> str){
        if(str=="Z")stc.pop();
        else stc.push(stoi(str));
        
    }
    
    while(!stc.empty()){
        answer += stc.top();
        stc.pop();
    }
    return answer;
}