#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> result(strArr.size());
    
    for(int i=0; i<strArr.size(); i++){
        result[strArr[i].length()]++;
    }
    
    answer = *max_element(result.begin(), result.end());

    return answer;
}