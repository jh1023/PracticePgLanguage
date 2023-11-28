#include <stdio.h>

int main() {
    int n=0;
	scanf("%d\n", &n);
	
	int score = 0; 
	int maxScore =0;
	int totalScore = 0;

	for(int i=0; i<n; i++){
		scanf("%d", &score);
		totalScore += score;
		if(score >maxScore)
			maxScore = score;
	}
	
	printf("%f\n", 100.0 * totalScore / n / maxScore);
	
    
}