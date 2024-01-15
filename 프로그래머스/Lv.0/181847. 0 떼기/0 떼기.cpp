#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string n_str) {
    int cnt = 0;
    for(int i=0; i<n_str.length(); i++){
        if (n_str[0] == '0') {
            if(n_str[i] == '0')cnt=cnt+1;
            else break;
        }
    }
    n_str.erase(0, cnt);
    return n_str;
}