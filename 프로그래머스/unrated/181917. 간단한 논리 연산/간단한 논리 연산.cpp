#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    bool x12 = true;
    bool x34 = true;
 
    x12= x1!=1 && x2 !=1? false:true;    
    x34= x3!=1 && x4 !=1? false:true;
    
    answer = x12 == 1 && x34 == 1 ? true:false;
    
    return answer;
}