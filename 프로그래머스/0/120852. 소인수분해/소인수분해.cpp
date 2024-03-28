#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int a = 0;
    for(int i=2; i<=n;){
        if(n%i==0){
            //cout<<i<<endl;
            answer.push_back(i);
            n/=i;
        }else{
            i++;
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());

    
        
    
    
    return answer;
}