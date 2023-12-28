#include <string>
#include <vector>

using namespace std;

int dir[4][2]={{0, +1}, {+1, 0}, {0, -1}, {-1, 0}};

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;

    int cur_x=0, cur_y=0, cnt=1, mod=0;
    vector<vector<int>> temp(n, vector<int>(n, 0));
    while(cnt <= n*n) {
        if(0 <= cur_x && cur_x<n && 0 <= cur_y && cur_y < n && 
           temp[cur_x][cur_y] == 0) {
            temp[cur_x][cur_y]=cnt;
            cnt++;
        }
        
        cur_x+=dir[mod][0]; cur_y+=dir[mod][1];
        
        if(cur_x == 0 && cur_y == n || cur_x == n && cur_y == n-1 || cur_x == n-1 
           && cur_y==-1 || temp[cur_x][cur_y] != 0) {
            cur_x-=dir[mod][0]; cur_y-=dir[mod][1];
            mod=(mod+1)%4;
        }
    }
    answer = temp;   

    return answer;
}