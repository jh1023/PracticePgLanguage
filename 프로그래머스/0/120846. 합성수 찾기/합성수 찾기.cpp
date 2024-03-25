#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=2; i<=n; i++){
        for(int j=2; j<=int(sqrt(double(i))); j++){
            if(i%j==0){
                answer++;
                break;
            }
        }
    }
    return answer;
}