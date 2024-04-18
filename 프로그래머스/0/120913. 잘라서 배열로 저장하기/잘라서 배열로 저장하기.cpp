#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string a="";
    for(int i=0; i<my_str.size(); i++){
        if(i%n==0){
            a = my_str.substr(i,n);
            answer.push_back(a);
        }
    }
    
    return answer;
}