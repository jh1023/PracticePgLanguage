#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int i = 1;
    while(true){
        if((slice*i)>n){
            answer = i;
            break;
        }else if(n%slice==0){
            answer= n/slice;
            break;
        }
        i++;
    }
    return answer;
}