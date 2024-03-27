#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int a = 1;
    int sum = 1;
    
    while(true){
        sum*=a;
        if(sum>n) break;
        a++;
    }
    a--;
    return a;
}