#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    const int n = max(a.size(),b.size());
    string answer(n + 1,'0');

    int carry = 0;
    for(int t = 0; t < answer.size(); ++t) {
        int na = (a.size() > t)?(a[a.size() - 1 - t]-'0'):0;
        int nb = (b.size() > t)?(b[b.size() - 1 - t]-'0'):0;

        answer[n - t] = (na+nb+carry) % 10 + '0';
        carry = (na+nb+carry) / 10;
    }

    return (answer.front() != '0') ? answer : answer.substr(1);
}