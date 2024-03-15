#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    char a;
    for(auto c:letter){
        a=c;
    }
    for(int i=0; i<my_string.length(); i++){
        if(my_string[i]!=a){
            answer += my_string[i];
        }
    }
    return answer;
}