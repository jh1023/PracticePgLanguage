#include <iostream>

int main()
{
	int a,b,c;
	scanf("%d %d\n",&a, &b);
	scanf("%d\n",&c);
	
	if(b+c >= 60){
		a = a + ((b+c)/60);	
		b = (b+c)%60;
	}else{
		b=b+c;
	}

	a = a>23 ?a-24:a;	
	printf("%d %d", a,b);
	return 0;
}
