#include <stdio.h>

int main() {
	int count;
	scanf("%d", &count);
	for (int i = 1; i <= count; i++) {
		for(int r = 0; r < count-i; r++){
			printf(" ");
		}
		for(int j = 1; j<=i; j++){
			printf("*");		
		}
		printf("\n");
	}
	return 0;
}
