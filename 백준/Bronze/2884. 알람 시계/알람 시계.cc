#include <iostream>

int main()
{
	int a,b;
	scanf("%d %d",&a, &b);

	if(b-45 <0){
		a -= 1;
		b = (60+b)-45;
	}else{
		b=b-45;
	}
	a = a<0 ?23:a;

	
	printf("%d %d", a,b);
	return 0;
}
