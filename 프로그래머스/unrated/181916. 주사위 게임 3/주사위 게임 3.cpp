#include <string>
#include <iostream> 
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int multi = 1;
    vector<int> v1;
    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);
    v1.push_back(d);
    
    sort(v1.begin(), v1.end()); 
    vector<int> num_list(10, 0);

    for(const auto& n: v1){
        num_list[n]++;
    }

    for(int i=0; i<num_list.size(); i++){
        if(num_list[i]==4){ 
            answer = 1111 * i; 
            break;
        }else if(num_list[i]==3){
            for(int j=0;j<num_list.size();j++){
                if(num_list[j]==1){
                    answer=(10*i+j)*(10*i+j);
                    break;
                }
            }
        }else if(num_list[i]==2){
            for(int j=0;j<num_list.size();j++){
                if(num_list[j]==2){
                    if(i==j){continue;}
                    else{
                        answer=(v1.front() + v1.back()) * abs(v1.front() - v1.back());
                        break;
                    }
                }else if(num_list[j]==1){
                    multi=multi*(j);                    
                }
            }
            if(multi!=1)answer = multi;
        }       
    }
    v1.erase(unique(v1.begin(),v1.end()),v1.end());
    if(v1.size()==4) answer = v1.front();
    
    return answer;
}