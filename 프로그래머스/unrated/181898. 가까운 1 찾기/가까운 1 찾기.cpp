#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = 0;
    for(int i = 0; i < arr.size(); i++){
        if(i >= idx){
            if(arr[i] == 1){
                answer = i;
                break;
            }else{
                answer = -1;
            }
        }
        
    }
    return answer;
}