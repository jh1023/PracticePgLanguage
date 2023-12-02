#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    vector<string> vMystr;
    for(int i = 0; i < my_string.length(); i++) {
        vMystr.push_back(my_string.substr(0, my_string.length() - i));
    }
    
    for(auto i : vMystr){
        if(i == is_prefix) { answer = 1; }          
    }
          
    return answer;
}