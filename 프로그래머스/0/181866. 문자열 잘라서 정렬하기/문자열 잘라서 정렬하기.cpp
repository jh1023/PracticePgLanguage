#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string s;
    for(int i =0; i<myString.length(); i++){
        if(myString[i] != 'x'){
            s += myString[i];
        }
        if(myString[i] == 'x' && myString[i+1] != 'x'){
            if(s.empty())continue;
            answer.push_back(s);
            s.clear(); 
        }else if(i==myString.length()-1 && myString[i]!='x'){
            answer.push_back(s);
        }
        
    }
    
    sort(answer.begin(), answer.end()); 
    return answer;
}