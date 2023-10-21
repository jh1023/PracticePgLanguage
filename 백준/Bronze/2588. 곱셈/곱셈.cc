#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int a,b;
	cin>>a>>b; 	
	int answer1 = a*b;
	while(b != 0){
        cout <<a*(b%10)<< "\n";
        b /= 10;
    }
	
    cout<<answer1<<endl;

    return 0;
}