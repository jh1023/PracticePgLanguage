#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int cnt = 0;
    for(int i=0; i<myString.length(); i++){
        if(myString[i]!='x')cnt++;
        else if(myString[i] =='x'&& myString[i-1] !='x'){
            answer.push_back(cnt);
            cnt = 0;            
        }else if(myString[i] =='x' && myString[i-1] =='x'){
            answer.push_back(0);
        }
        if(i==(myString.length()-1)&& myString[i] !='x'){
            answer.push_back(cnt);
        }else if(i==myString.length()-1 && myString[i] =='x'){
            answer.push_back(0);
        }        
    }
    
    return answer;
}