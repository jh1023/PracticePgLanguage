#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(int i=0; i<rsp.length(); i++){
        char w;
        if(rsp[i]=='2')w='0';
        else if(rsp[i]=='0')w='5';
        else if(rsp[i]=='5')w='2';
        answer += w;
    }
    return answer;
}