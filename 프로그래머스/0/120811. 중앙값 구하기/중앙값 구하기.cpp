#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(), array.end());
    int arrSize = array.size()/2;
    //cout<<arrSize;
    answer = array[arrSize];
    return answer;
}