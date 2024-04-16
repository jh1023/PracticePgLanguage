#include <string>
#include <vector>
#include<iostream>
#include<cmath>

using namespace std;

int solution(int n, int t) {
    int answer = n;
    for(int i=0; i<t; i++){
        answer *=2;
    }

    return answer;
}