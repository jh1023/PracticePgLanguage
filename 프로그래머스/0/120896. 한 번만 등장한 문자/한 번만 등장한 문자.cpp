#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v(26,0);
    
    for(int i=0; i<s.length(); i++){
        v[s[i]-97]++;
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]==1)
            answer += (char)(i+97);
    }
    return answer;
}