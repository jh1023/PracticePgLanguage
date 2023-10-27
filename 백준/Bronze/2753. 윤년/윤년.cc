#include <iostream>
using namespace std;

int main() {
	int year;
	scanf("%d", &year);
	int yearResult = year % 4 == 0 && year % 100 !=0 || year % 400 == 0 ? 1:0;
	
	printf("%d", yearResult);
	return 0;
}