#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int coupon = 0;
    
    while(1){
        if(chicken<10)break;
        
        coupon = chicken%10;
        chicken/=10;
        
        answer+=chicken;
        
        chicken += coupon;      
        
    }
    
    return answer;
}