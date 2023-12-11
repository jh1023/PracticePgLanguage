#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer=my_string;
    
    for(int i = 0; i < indices.size(); i++){
        answer.replace(indices[i], 1, "X");
    }
    answer.erase(remove(answer.begin(),answer.end(), 'X'), answer.end());
    return answer;
}