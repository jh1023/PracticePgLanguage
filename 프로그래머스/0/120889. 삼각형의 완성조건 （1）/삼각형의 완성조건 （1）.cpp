#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max = 0;
    int sum = 0;
    for(int i=0; i<sides.size(); i++){
        if(sides[i]>max)max = sides[i];
        sum += sides[i];
    }
    sum = sum - max;
    answer = sum > max ? 1:2;
    

    return answer;
}