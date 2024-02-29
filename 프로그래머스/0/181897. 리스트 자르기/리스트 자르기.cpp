#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    switch(n){
        case 1:
            std::copy(num_list.begin(), 
                      num_list.begin() + slicer[1] + 1, std::back_inserter(answer));
            break;            
        case 2:
            std::copy(num_list.begin() + slicer[0], 
                      num_list.end(), std::back_inserter(answer));
            break;            
            
        case 3:
            std::copy(num_list.begin() + slicer[0], 
                      num_list.begin() + slicer[1] + 1, std::back_inserter(answer));
            break;
        case 4:
            for(int i=slicer[0]; i<=slicer[1]; i+=2){
                answer.push_back(num_list[i]);
            }
            break;            
            
    }
    return answer;
}