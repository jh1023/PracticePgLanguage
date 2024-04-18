#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    string a = "";
    
    for(int i: array){
        if(i<10)a+= i+'0';
        else a+= to_string(i);  
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i]=='7')answer+=1;
    }
    
    return answer;
}