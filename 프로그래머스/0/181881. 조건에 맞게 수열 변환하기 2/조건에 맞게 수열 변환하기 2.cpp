#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = -1;

    bool test = true;
    while(test) {
        test = false;

        for(auto& v : arr){
            if(v >= 50 && !(v & 1)){
                v /= 2;
                test = true;
            }
            else if(v < 50 && (v & 1)){
                v = v * 2 + 1;
                test = true;
            }
        }
        answer++;
    }

    return answer;
}