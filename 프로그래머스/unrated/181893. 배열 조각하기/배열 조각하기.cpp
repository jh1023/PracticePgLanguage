#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;

    for(int i = 0 ; i<query.size() ; ++i){
        if(i%2 == 0) {
            for(int j=arr.size()-1 ; j>query[i] ; --j)
                arr.pop_back();
        }else{
            auto it = arr.begin();
            for(int j = 0; j < query[i]; ++j)
                it += 1;
            arr.erase(arr.begin(),it);
        }        
    }  
    answer = arr;
    for(auto i:answer)
        cout << i << endl;
    
    return answer;
}
