#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int a, b;
	cin>>a>>b;
	string answer = a >b ?">":a<b? "<":"==";
	
    cout<<answer<<endl;
    return 0;
}