#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end) {
    vector<int> answer(end - start + 1);
    int inx = 0;
    for(int i = start; i <= end; i++) answer[inx++] = i;
    return answer;
}
