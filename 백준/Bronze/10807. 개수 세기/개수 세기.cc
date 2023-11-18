#include <stdio.h>

int main()
{
	int n = 0;
	int arrNum[100];
	int searchNum = 0;
	int cnt = 0;
	
	scanf("%d\n", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arrNum[i]);
	}
	scanf("%d\n", &searchNum);
	
	for(int i = 0; i < n; i++){
		if(arrNum[i] == searchNum)
			cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}
