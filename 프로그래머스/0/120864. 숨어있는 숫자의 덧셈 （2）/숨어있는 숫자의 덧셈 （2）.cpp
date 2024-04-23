#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    int n = 0;
    cout<<my_string.size();
    for(int i=0; i<my_string.size(); i++){
        if(isdigit(my_string[i])) n=n*10+my_string[i]-'0';
        else answer+=n, n=0;        
    }
    answer +=n;
    return answer;
}