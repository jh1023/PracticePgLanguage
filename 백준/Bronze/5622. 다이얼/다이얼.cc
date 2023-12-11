#include <iostream>
using namespace std;

int main()
{
	string a="";
	cin>>a;
	int answer=0;
	for(int i=0; i<a.length(); i++){
		if(a[i]>='A' && a[i]<='C')
			answer +=3;
		else if(a[i]>='D' && a[i]<='F')
			answer +=4;
		else if(a[i]>='G' && a[i]<='I')
			answer +=5;
		else if(a[i]>='J' && a[i]<='L')
			answer +=6;
		else if(a[i]>='M' && a[i]<='O')
			answer +=7;
		else if(a[i]>='P' && a[i]<='S')
			answer +=8;
		else if(a[i]>='T' && a[i]<='V')
			answer +=9;
		else if(a[i]>='W' && a[i]<='Z')
			answer +=10;		
	}
	cout << answer;

	return 0;
}
