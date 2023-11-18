#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i=l; i<=r; i++){
        if(i%5 ==0){
            if (to_string(i).find("5") == std::string::npos&&
               to_string(i).find("0") == std::string::npos||
               to_string(i).find("1") != std::string::npos||
               to_string(i).find("2") != std::string::npos||
               to_string(i).find("3") != std::string::npos||
               to_string(i).find("4") != std::string::npos||
                to_string(i).find("6") != std::string::npos||
                to_string(i).find("7") != std::string::npos||
                to_string(i).find("8") != std::string::npos||
                to_string(i).find("9") != std::string::npos
               )
            { }
            else{
            printf("%d\n",i);
            answer.push_back(i);            
            }
        }
    }
    if(answer.size()==0) answer.push_back(-1);

    return answer;
}