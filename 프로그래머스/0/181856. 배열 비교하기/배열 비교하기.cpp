#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int sumArr1 = 0;
    int sumArr2 = 0;
    answer = arr1.size()>arr2.size()?1:arr1.size()<arr2.size()?-1:0;
    if(arr1.size()==arr2.size()){
        for(int i:arr1){
           sumArr1 += i; 
        }
        for(int i:arr2){
           sumArr2 += i; 
        }        
        answer = sumArr1 > sumArr2 ? 1 : sumArr1<sumArr2 ? -1:0;
    }
    return answer;
}