#include <string>
#include <vector>
#include <queue>

using namespace std;

queue<int>q;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int cnt = 0;
    
    for(int i=0; i<numbers.size(); i++){
        q.push(numbers[i]);
    }
    
    while(1){
        answer = q.front();
        cnt++;
        
        q.push(q.front());
        q.pop();
        
        q.push(q.front());
        q.pop();
        
        if(cnt == k) break;
    }
    
    return answer;
}