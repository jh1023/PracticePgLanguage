#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(int i=0; i<quiz.size(); i++){
        int a, b, c;
        char op, eq;
        
        stringstream ss;
        ss.str(quiz[i]);
        ss>>a>>op>>b>>eq>>c;
        
        if(op=='+'){
            if(a+b==c) answer.push_back("O");
            else answer.push_back("X");
        }else if(op=='-'){
            if(a-b==c)answer.push_back("O");
            else answer.push_back("X");
        }
    }
    return answer;
}