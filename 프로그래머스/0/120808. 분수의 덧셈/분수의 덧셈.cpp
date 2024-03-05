#include <string>
#include <vector>
#include <iostream>

using namespace std;
         
int gcd(int numersum, int denomsum){
    if(numersum % denomsum==0)        
            return denomsum;
    else
        return gcd(denomsum, numersum % denomsum);
}            
            
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int numersum = numer1*denom2 + numer2*denom1;
    int denomsum = denom1*denom2;
    int gcd2 = gcd(numersum, denomsum);

    answer.push_back(numersum/gcd2);
    answer.push_back(denomsum/gcd2);    

    return answer;
}