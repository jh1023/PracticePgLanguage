#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    int a = rank.size(), b = rank.size(),  c = rank.size();
    
    rank.push_back(500);
    attendance.push_back(true);
    
    for(int i = 0; i < rank.size(); i++)
        if(rank[i] < rank[a] && attendance[i]) a = i;
    
    for(int i = 0; i < rank.size(); i++)
        if(rank[i] < rank[b] && attendance[i] && i != a) b = i;
    
    for(int i = 0; i < rank.size(); i++)
        if(rank[i] < rank[c] && attendance[i] && i != a && i != b) c = i;

    answer = a * 10000 + b * 100 + c;
    
    return answer;
}