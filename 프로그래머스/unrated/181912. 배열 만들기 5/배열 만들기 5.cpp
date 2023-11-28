#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string a ="";
    
    for(int i=0; i<intStrs.size(); i++){
        a = intStrs[i].substr(s,l);
        if(stoi(a)>k) answer.push_back(stoi(a));
    }

    return answer;
}