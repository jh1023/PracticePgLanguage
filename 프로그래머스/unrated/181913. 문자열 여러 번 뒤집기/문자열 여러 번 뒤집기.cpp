#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";

    for(int i = 0; i < queries.size(); i++){
        int a = queries[i][1];
        
        answer = my_string.substr(queries[i][0], ((queries[i][1]-queries[i][0])+1));
        reverse(answer.begin(), answer.end());
        my_string.replace(queries[i][0], ((queries[i][1]-queries[i][0])+1), answer);
    }
    
    return my_string;
}