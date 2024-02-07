#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    int idx = 0;
    int a = 0;
    int b = 0;
    char formul;
    // 전체 공백 제거
    binomial.erase(remove(binomial.begin(), binomial.end(), ' '), binomial.end());
    
    for(int i =0; i<binomial.length(); i++){
        if(binomial[i] == '+' || binomial[i] == '-' || binomial[i] == '*'){
            formul = binomial[i];
            idx = i;
        }
    }
    
    a = stoi(binomial.substr(0, idx));
    b = stoi(binomial.substr(idx+1, binomial.length()-idx));
    
    answer = formul == '+' ? a+b: formul == '-' ? a-b:a*b;
    return answer;
}