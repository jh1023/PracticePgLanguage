#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 1;
    for(int i: box){
        int a = i/n;
        answer *= a;
    }
    
    
    return answer;
}