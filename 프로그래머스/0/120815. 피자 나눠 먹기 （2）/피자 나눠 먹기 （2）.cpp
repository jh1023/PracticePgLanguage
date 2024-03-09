#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n) {
   int answer = 1;
    int v = 6;
    while(v % n != 0)
    {
        answer++;
        v += 6;
    }
    return answer;
}