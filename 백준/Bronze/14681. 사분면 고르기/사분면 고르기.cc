#include <iostream>
using namespace std;

int main() {
    int x, y;
    scanf("%d\n", &x);
    scanf("%d", &y);
	int xyResult = x >= 0 && y >= 0 ? 1: x < 0 && y >= 0 ? 2: x < 0 && y < 0 ? 3:4;
	
	printf("%d", xyResult);
	return 0;
}