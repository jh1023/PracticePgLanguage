#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int food = 12000;
    int juse = 2000;
    int service = 0;
    
    if(n>=10) service = (n/10) *juse;
    answer = n*food + k*juse - service;
    
    return answer;
}