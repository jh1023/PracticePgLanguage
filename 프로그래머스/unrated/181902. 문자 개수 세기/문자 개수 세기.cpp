#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);
    //cout<<my_string;
    for(int i = 0; i < my_string.length(); i++){
        int num = my_string[i];
        if(num < 91) answer[num-65]++;
        else if(num >= 97) answer[num-71]++;        
    }
    
    return answer;
}