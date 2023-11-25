#include <string>
#include <vector>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    for(int i = 0; i < index_list.size(); i++){
        for(int j = 0; j < my_string.length(); j++){
            if(index_list[i] == j) answer += my_string[j];
        }  
    }
        
    return answer;
}