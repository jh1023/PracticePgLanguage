#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string str = to_string(num);    
    char cNum = k + '0';
    cout<<cNum<<endl;
    for(int i=0; i<str.length(); i++){    
        if(cNum == str[i]){
            answer = i +1;
            break;
        }
    }
    return answer;
}