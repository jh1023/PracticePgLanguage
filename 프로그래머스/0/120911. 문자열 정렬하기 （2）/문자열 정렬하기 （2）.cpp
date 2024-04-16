#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i<my_string.length(); i++){
        if(my_string[i] >='A' && my_string[i] <='Z'){
            my_string[i] = my_string[i] + 32;
        }
        answer += my_string[i];
    }
    std::sort(answer.begin(), answer.end());

    return answer;
}