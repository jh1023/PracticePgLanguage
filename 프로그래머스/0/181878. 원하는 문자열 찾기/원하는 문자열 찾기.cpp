#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i = 0; i < myString.length(); i++){
        if(myString[i] >= 'a' && myString[i] <= 'z') myString[i] -= 32;
    }
    
    for(int i = 0; i < pat.length(); i++){
        if(pat[i] >= 'a' && pat[i] <= 'z') pat[i] -= 32;
    }
    if (myString.find(pat) != std::string::npos){
        answer = 1;        
    }
    return answer;
}