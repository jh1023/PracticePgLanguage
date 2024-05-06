#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string str = "";
    vector<char> v;
    char kk = k + '0';

    for(int a=i; a<=j; a++){
        if(a>9){
            string tenbig = to_string(a);
            str += tenbig;
        }else{
            char vv = a + '0';
            str += vv;
        }
    }
    for(int i=0; i<str.length(); i++){
        if(str[i]==kk)
            answer++;
    }

    return answer;
}