#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    vector<int>num;
    num.push_back(a);
    int val = a;
    for(int i=1; i<included.size(); i++){
        val += d;
        num.push_back(val);
    }
    for(int i=0; i<included.size(); i++){
        if(included[i]){
            answer += num[i];
        }
    }    
    
    return answer;
}