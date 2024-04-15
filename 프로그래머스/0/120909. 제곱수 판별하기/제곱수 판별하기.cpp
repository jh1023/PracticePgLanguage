#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    int a = sqrt(n);
    answer = a*a == n ? 1:2;
    return answer;
}