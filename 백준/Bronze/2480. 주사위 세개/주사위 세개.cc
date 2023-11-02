#include <iostream>
#include <algorithm>
int main()
{
	int a,b,c;
	scanf("%d  %d %d\n",&a, &b, &c);
	int result=0;
	int cash=0;
	if(a==b && a==c && b==c){
		result = a;
		cash=10000 + (result*1000);
	}else if(a==b && a!=c || a==b && b!=c || b==c && a!=b ||b==c &&a!=c && c==a && c!=b || c==a && a!=b)
	{
		result = a==b ? a: b==c? b:c;
		cash = 1000 + (result *100);	
	}else{
		result = std::max(a,b);
		result = std::max(result,c);
		cash= result * 100;
	}

	printf("%d", cash);
	return 0;
}