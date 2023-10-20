#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int a,b,c;
	cin>>a>>b>>c; 	

	int answer1 = (a+b)%c;
	int answer2 = ((a%c)+(b%c))%c;
	int answer3 = (a*b)%c;
	int answer4 = ((a%c)*(b%c))%c;
	
    cout<<answer1<<endl;
	cout<<answer2<<endl;
    cout<<answer3<<endl;
    cout<<answer4<<endl;

    return 0;
}