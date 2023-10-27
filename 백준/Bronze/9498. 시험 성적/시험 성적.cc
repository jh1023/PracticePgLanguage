#include <iostream>
using namespace std;

int main() {
	int score;
	scanf("%d", &score);
	char scoreResult = score >=90 && score <=100 ? 'A':
	score >=80 && score < 90 ? 'B' :
	score >=70 && score < 80 ? 'C' :
	score >=60 && score < 70 ? 'D' : 'F';
	
	printf("%c", scoreResult);
	return 0;
}