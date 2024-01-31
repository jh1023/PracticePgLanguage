#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i =0;
    while(true){
        if(i< arr.size()){
            if(answer.empty()){
                answer.push_back(arr[i]);
            }else{
                if(answer.back() != arr[i])
                    answer.push_back(arr[i]);
                else if(answer.back() == arr[i]){
                     answer.erase(answer.end() - 1);
                }
            }          
        }
        if(i>arr.size())break;
        i++;
    }
    if(answer.empty())
        answer.push_back(-1);

    
    return answer;
}