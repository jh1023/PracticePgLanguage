#include <string>
#include <vector>
#define MAX 10000000

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for(auto tmp : queries){
        int ans = MAX;        
        for(int i = tmp[0]; i<=tmp[1]; i++){
            if(arr[i] > tmp[2] && ans > arr[i]) ans = arr[i];
        }
        if(ans == MAX) answer.push_back(-1);
        else answer.push_back(ans);
    }
    return answer;
}