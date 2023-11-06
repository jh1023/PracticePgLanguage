#include <iostream>

int main() {
	int a;
	scanf("%d", &a);
	int answer = 0;
	for (int i = 0; i <= a; ++i) {
		answer += i;
	}
	printf("%d\n", answer);

	return 0;
}