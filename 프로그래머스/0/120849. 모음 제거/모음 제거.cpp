#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto c: my_string){
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
            answer += c;
        }
    }
    return answer;
}