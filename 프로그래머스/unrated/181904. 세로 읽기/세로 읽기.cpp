#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    vector<string> vMystr;
    for(int i = 0; i < my_string.length(); i++){
        if(i % m == 0){
            vMystr.push_back(my_string.substr(0 + i, m));
        }
    }
    for(int i = 0;i < vMystr.size(); i++){
        answer += vMystr[i].substr(c - 1, 1);
    }
    return answer;
}