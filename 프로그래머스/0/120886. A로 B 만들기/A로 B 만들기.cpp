#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(string before, string after) {
    int answer = 1;
    
    sort(before.begin(), before.end()); //aellp
    sort(after.begin(), after.end()); //aelpp
    
    if(before!=after)answer=0;
    
    return answer;
}