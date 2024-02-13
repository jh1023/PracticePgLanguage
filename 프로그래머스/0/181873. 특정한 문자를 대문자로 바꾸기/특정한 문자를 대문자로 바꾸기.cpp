#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    char a;
    for(char i: alp)
        a = i;
    
    vector<char> v;
    for(int i=0; i<my_string.length(); i++){
        if(my_string[i] == a)
            my_string[i] =  my_string[i]- 32;
        v.push_back(my_string[i]);
    }
    
    for(int i=0; i<v.size(); i++)
        answer += v[i];
    return answer;
}