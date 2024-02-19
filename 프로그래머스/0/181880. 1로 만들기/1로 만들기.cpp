#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(int i=0; i<num_list.size(); i++){
        int num = num_list[i];
        while(num!=1){
            if(num%2==0){
                num = num/2;
                answer++;                
            }else{
                num = (num-1)/2;
                answer++;  
            }
            
        } 
        
    }
    
    return answer;
}