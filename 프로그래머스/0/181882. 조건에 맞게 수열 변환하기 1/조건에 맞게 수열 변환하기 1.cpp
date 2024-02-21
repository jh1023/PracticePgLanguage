#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int result = 0;
    for(int i: arr){
        if(i % 2 == 0 && i >= 50)i = i/2;
        else if(i % 2 != 0 && i < 50) i = i*2;
        answer.push_back(i);        
    }
    return answer;
}