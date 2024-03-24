#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    int n, idx;
    
    if(direction=="right"){
        n=numbers[numbers.size()-1];
        answer.push_back(n);
        
        for(int i=0; i<numbers.size()-1; i++)
            answer.push_back(numbers[i]);
    }
    
    else{
        n=numbers[0];
        for(int i=1; i<numbers.size(); i++)
            answer.push_back(numbers[i]);
        
        answer.push_back(n);
    }
    
    return answer;
}