#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a = n/7;
    int b = n%7;
    if(a>0 && b==0){
        answer = a;
    }else if(a<=0){
        answer = 1;
    }else if(a>0 && b>0){
        answer = a+1;
    }
    return answer;
}