#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    string a = n % 2 == 0 ? " is even" : " is odd";
    
    cout << n << a << endl;
    return 0;
}