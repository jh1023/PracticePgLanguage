#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int cnt =1;
    
    while(true){
        bool check = false;
        string s = to_string(answer);
        
        if(answer%3==0){
            answer+=1;
            continue;
        }else{
            for(int i=0; i<s.size(); i++){
                if(s[i]=='3'){
                    answer+=1;
                    check = true;
                    break;
                }
            }
        }
        
        if(check)continue;
        
        if(cnt==n)break;
        
        cnt++;
        answer++;
        
    }
    return answer;
}