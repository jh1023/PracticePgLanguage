#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = my_string.find(target) == -1? 0:1;
    return answer;
}