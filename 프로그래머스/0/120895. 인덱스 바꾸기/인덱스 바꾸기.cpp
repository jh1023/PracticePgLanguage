#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    char temp;
    
    for(int i=0; i<my_string.length(); i++){
        if(i==num1){
            temp = my_string[i];
            my_string[i] = my_string[num2];
            my_string[num2] = temp;
        }
        answer += my_string[i];
    }
    return answer;
}