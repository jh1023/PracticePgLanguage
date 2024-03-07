#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int>idx(1000, 0);

    for(int i=0; i<array.size(); i++){
        idx[array[i]]++;
    }

    int max = *max_element(idx.begin(), idx.end());
    int max_index = max_element(idx.begin(), idx.end()) - idx.begin();
    
    if(count(idx.begin(), idx.end(), max) > 1){
        answer = -1;
    }else{
        answer= max_index;
    }
        
    return answer;
}