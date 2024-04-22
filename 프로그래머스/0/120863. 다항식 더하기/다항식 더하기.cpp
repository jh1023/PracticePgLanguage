#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

string s[50];

string solution(string polynomial) {
    string answer = "";
    int cnt=0;
    int x=0, y=0;
    
    stringstream ss;
    ss.str(polynomial);
    
    while(ss >> s[cnt]){
        cnt++;
    }
    
    for(int i=0; i<cnt; i++){
        if(s[i][s[i].size()-1]=='x'){
            if(s[i].size()==1) x+=1;
            else x+=stoi(s[i].substr(0, s[i].size()-1));
        }
        
        else if(s[i][s[i].size()-1]=='+') continue;
        else y+=stoi(s[i]);
    }
    
    if(x!=0){
        if(x==1) answer+="x";
        else answer+=to_string(x)+"x";
    }
    
    if(y!=0){
        if(answer!="") answer+=(" + "+to_string(y));
        else answer+=(to_string(y));
    }
    
    if(answer=="") answer="0";
    
    
    return answer;
}