#include <string>
#include <vector>
#include<math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i =0; i<=n; i++)
    {
        if(n%2 == 0){
            if(i%2 == 0) {
                answer += pow(i,2);                                             }
        }else{
            if(i%2 != 0) answer += i;
        }
    }
    return answer;
}