#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {

    int n = arr.size();
    int m = arr[0].size();

    if(n > m) {
        for(auto& row : arr) {
            for(int t = 0 ;t < n-m; ++t) {
                row.emplace_back(0);
            }
        }
    }
    else if(m > n) {
        for(int t = 0 ;t < m-n; ++t) {
            arr.emplace_back(vector<int>(m,0));
        }
    }

    return arr;
}