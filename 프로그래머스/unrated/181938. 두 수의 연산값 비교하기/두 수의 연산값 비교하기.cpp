#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string plusAb = to_string(a) + to_string(b);
    answer = stoi(plusAb) > 2 * a * b ? stoi(plusAb): 2 * a * b;
    
    return answer;
}