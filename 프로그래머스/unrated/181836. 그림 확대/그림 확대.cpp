#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string str = "";
    for(int i = 0; i < picture.size(); i++){
        for(int j = 0; j < picture[i].size(); j++){
            for(int n = 0; n < k; n++){
                str += picture[i][j];
            }
            
        }
        
        for(int s =0; s<k; s++){
            answer.push_back(str);
        }
        str = "";
    }
    
    return answer;
}