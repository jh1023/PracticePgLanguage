#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string s;
    for(int i =0; i<my_string.length(); i++){
        if(my_string[i] != ' '){
            s += my_string[i];
        }
        if(my_string[i] == ' ' && my_string[i+1] != ' '){
            if(s.empty())continue;
            answer.push_back(s);
            s.clear(); 
        }else if(i==my_string.length()-1 && my_string[i]!=' '){
            answer.push_back(s);
        }        
    }    
    return answer;
}