#include <iostream>
using namespace std;

int main()
{
	string a="";
	cin>>a;
	string ra="";
	for(int i=a.size()-1; i>=0; i--){
		ra+=a[i];	
	}
	int answer = a==ra ? 1:0;
	cout<<answer;
	return 0;
}
