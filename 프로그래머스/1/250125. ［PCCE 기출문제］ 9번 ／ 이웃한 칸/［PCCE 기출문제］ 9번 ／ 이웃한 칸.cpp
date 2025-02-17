#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int count = 0;
    int n = board.size(); // board의 크기 (조건 : 가로 크기 = 세로 크기)
    
    vector<int> dh = {-1, 0, 0, 1};
    vector<int> dw = {0, -1, 1, 0};
    
    for (int i = 0; i < 4; i++){
        int h_check = h + dh[i];
        int w_check = w + dw[i];
        
        if ((0 <= h_check && 0 <= w_check) && (h_check < n && w_check < n)) {
            if (board[h][w] == board[h_check][w_check]) 
                count++;
        }
    }
    
    return count;
}