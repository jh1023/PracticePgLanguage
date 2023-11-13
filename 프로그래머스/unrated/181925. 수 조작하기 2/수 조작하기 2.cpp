#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int num = 0;
    for(int i = 0; i < numLog.size() - 1; i++){
        if(numLog[i] > numLog[ i + 1 ]){
           num = numLog[i] - numLog[ i + 1 ];
           answer += num == 1 ? "s":"a"; 
        }else{
            num = numLog[ i + 1 ] - numLog[i];
            answer += num == 1 ? "w":"d"; 
        }
    }
    return answer;
}