#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer = num_list;
    
    int result = num_list.at(num_list.size()-1) > num_list.at(num_list.size()-2) ? num_list.at(num_list.size()-1)- num_list.at(num_list.size()-2): (num_list.back()*2);
              
    answer.push_back(result);
    return answer;
}