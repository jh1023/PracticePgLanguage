#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for (int i = 0; i < babbling.size(); ++i) {
        // 1. 문자열에 들어갈 수 없는 것들이 있다면 건너뛰기
        if (babbling[i].find("ayaaya") != string::npos)
        {
            continue;
        }
        else if (babbling[i].find("yeye") != string::npos)
        {
        continue;
        }        
        else if (babbling[i].find("woowoo") != string::npos)
        {
        continue;
        }
        else if (babbling[i].find("mama") != string::npos)
        {
        continue;
        }else{
            // 2. babbling[i]에서 aya, ye, woo, ma를 찾았을 경우
            int count = 0;
            if (babbling[i].find("aya") != -1)
            {
                count += 3;
            }            
            if (babbling[i].find("ye") != -1)
            {
                count += 2;
            }
            if (babbling[i].find("woo") != -1)
            {
                count += 3;
            }            
            if (babbling[i].find("ma") != -1)
            {
                count += 2;
            }
            if (count == babbling[i].length())
            {
                ++answer;
            }
            
        }              
    }
  
    return answer;
}