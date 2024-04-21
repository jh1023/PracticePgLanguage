#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int xMax = dots[0][0];
    int xMin = dots[0][0];
    int yMax = dots[0][1];
    int yMin = dots[0][1];
    
    for(int i=1; i<dots.size(); i++){
        if(dots[i][0] > xMax){
            xMax = dots[i][0];
        }else if(dots[i][0] < xMin){
            xMin = dots[i][0];
        }
        if(dots[i][1] > yMax){
            yMax = dots[i][1];
        }else if(dots[i][1] < yMin){
            yMin = dots[i][1];
        }        
    }
    answer = (xMax - xMin) * (yMax - yMin);
    
    return answer;
}