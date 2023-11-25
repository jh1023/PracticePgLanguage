#include <stdio.h>

int arr[30] = {0};
int a;

int main()
{
	for(int i=1; i<=28; i++){
    	scanf("%d\n", &a);
		arr[a] = a;
	}
	for(int i = 1; i <= 30; i++) {
		if(arr[i]==0)
			printf("%d\n", i);
  	}
	return 0;
}
