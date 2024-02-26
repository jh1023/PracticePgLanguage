#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < num_list.size(); j++){
            if(i == 0){
                if(j >= n)
                    answer.push_back(num_list[j]);
            }else{
                if(j < n)
                    answer.push_back(num_list[j]);
            }
        }
        
    }
    return answer;
}