#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    int cnt = 0;
    vector<int>v;
    for(int i=0; i<dic.size(); i++){
        for(int j=0; j<spell.size(); j++){
            if(dic[i].find(spell[j]) != string::npos){
                cnt += 1;
            }
        }
        v.push_back(cnt);
        cnt=0;
    }

    sort(v.begin(), v.end());
    
    if(v[v.size()-1]==spell.size()) return 1;
    else return 2;
}