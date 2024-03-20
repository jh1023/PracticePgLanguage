#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int jang = hp/5;
    int bg = 0;
    int il = 0;
    if(hp%5 != 0){
        bg = (hp%5)/3;
        if((hp%5)%3!=0)
            il = (hp%5)%3;
    }
    answer = jang +bg + il;

    return answer;
}