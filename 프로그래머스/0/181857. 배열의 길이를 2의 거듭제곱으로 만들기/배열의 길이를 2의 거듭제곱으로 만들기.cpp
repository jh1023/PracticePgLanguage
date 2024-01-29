#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int a = 1;
    while(true){
        if(arr.size() > a){
            a = a*2;
        }else{
            int z = a- arr.size();
            for(int i=0; i<z; i++){
                answer.push_back(0);
            }
            break;
        }       
    }
    return answer;
}