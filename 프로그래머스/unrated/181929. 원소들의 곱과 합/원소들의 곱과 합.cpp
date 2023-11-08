#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mulNum = 1;
    int powNum = 0;
    for(int i : num_list){
        mulNum *= i;
        powNum += i;
    }
    powNum *= powNum;
    answer = powNum > mulNum ? 1:0;

    return answer;
}