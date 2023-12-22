#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    bool ok = false;
    
    for(int i = 0; i < str_list.size(); i++){  
        if(str_list[i][0] == 'l' && ok == false){
            ok = true;
            break;
        } else if(str_list[i][0] == 'r' && ok == false) {
            answer.clear();
            ok = true;
            continue;
        }
        answer.push_back(str_list[i]);
    }
    
    if(ok == false) answer.clear();
    
    return answer;
}