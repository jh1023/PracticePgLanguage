#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string plusAb;
    string plusBa;
    plusAb = to_string(a) + to_string(b);
    plusBa = to_string(b) + to_string(a);
    answer = stoi(plusAb) > stoi(plusBa) ? stoi(plusAb):stoi(plusBa);
    return answer;
}