#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    answer = my_string.substr(s,(e - s+1));
    reverse(answer.begin(), answer.end());
    my_string.replace(s,(e - s+1), answer);
    return my_string;
}