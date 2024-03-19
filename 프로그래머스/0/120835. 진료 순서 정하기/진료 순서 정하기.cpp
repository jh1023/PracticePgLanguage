#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    int cnt = 0;
    for(int i =0; i<emergency.size(); i++){
        for(int j=0; j<emergency.size(); j++){
            if(emergency[i] > emergency[j]){
                cnt +=1;  
            }    
        }
        answer.push_back(emergency.size() - cnt);
        cnt=0;
    }
    return answer;
}