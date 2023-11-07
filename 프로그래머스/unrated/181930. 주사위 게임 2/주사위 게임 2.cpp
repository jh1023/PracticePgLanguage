#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c) {
    if(a!=b && a!=c && b!=c)
        return a+b+c;
    else if(a==b && b!=c || b==c && a!=c || a==c && b!=c)
        return (a+b+c) * (a*a + b*b + c*c);
    else if(a==b && a==c && b==c)
        return (a+b+c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);    
}