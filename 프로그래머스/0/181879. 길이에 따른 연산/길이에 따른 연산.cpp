#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = (num_list.size() < 11) ? 1:0;
    for(auto i : num_list){
        if(num_list.size() < 11)
            answer *= i;
        else
            answer += i;
    }
    return answer;
}