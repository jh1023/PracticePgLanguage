#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string str;
    for(int i =0; i<myString.length(); i++){
        if(myString[i]=='A')myString[i]='B';
        else if(myString[i]=='B')myString[i]='A';
        str += myString[i];        
    }
    if (str.find(pat) != string::npos) {
        answer = 1;
    }
    
    return answer;
}