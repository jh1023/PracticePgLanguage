#include <bits/stdc++.h>
using namespace std;
string s[5];
int main() {	
	string result="";
	for(int i=0;i<5;i++){
		cin>>s[i];
	}
	for(int i=0;i<15;i++){
		for(int j=0;j<5;j++){
			result=s[j].length()>i?result+s[j][i]:result;
		}
	}
	cout<<result;
	return 0;
}