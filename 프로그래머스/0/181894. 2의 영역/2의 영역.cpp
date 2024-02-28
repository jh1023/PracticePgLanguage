#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> index;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2) index.push_back(i); 
    }
    
    if(index.size() == 0)answer.push_back(-1);
    else{
        std::copy(arr.begin() + index.front(), 
         arr.begin() + index.back() + 1, std::back_inserter(answer));       
    }
    
    return answer;
}