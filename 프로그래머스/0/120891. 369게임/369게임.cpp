#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string str = to_string(order);
    for(int i =0; i<str.length(); i++){
        int a = str[i] -'0';
        if(a % 3==0){
            if(a != 0)
                answer +=1;
        }
    }
    return answer;
}