#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 0;
    vector<int>vResult;
    for(int i =0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            if(arr[i][j] == arr[j][i])
                vResult.push_back(1);
            else
                vResult.push_back(0);
        }
    }
    if(find(vResult.begin(), vResult.end(), 0) == vResult.end()) { 
        answer = 1;
    }
    return answer;
}