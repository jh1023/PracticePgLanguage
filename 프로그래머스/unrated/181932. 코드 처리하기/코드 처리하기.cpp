#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;

    for(int i=0; i<code.length(); i++){
        if(mode == 0 && code[i] =='1'){
            mode = 1;
            continue;
        }
        else if(mode == 1 && code[i] =='1'){
            mode = 0;
            continue;
        }
        
        if(mode == 0 && i%2 == 0)
            answer += code[i];
        else if(mode == 1 && i%2 != 0)
            answer += code[i];        
    }
    answer = answer.empty() ? "EMPTY":answer;
        
    return answer;
}