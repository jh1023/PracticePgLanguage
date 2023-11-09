#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string oddAdd;
    string evenAdd;
    
    for(int i: num_list){
        if(i % 2 == 0)
            evenAdd += to_string(i);
        else
            oddAdd += to_string(i);
    }
    answer = stoi(evenAdd) + stoi(oddAdd);
    
    return answer;
}