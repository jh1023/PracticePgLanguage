#include <string>
#include <vector>
 
using namespace std;

//최대 공약수
int gcd(int a, int b) {
    int c;
    while (b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
//최소 공배수
int lcm(int a, int b, int c) {
    return a * b / c;
}
 
vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n, m));
    answer.push_back(lcm(n, m, answer.at(0)));
    return answer;
}
